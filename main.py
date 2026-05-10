import os
import tkinter as tk
from tkinter import ttk, messagebox, scrolledtext

def generate_files():
    """Create folder, README.md and main.c from user input."""
    question = entry_question.get().strip()
    problem_stmt = text_problem.get("1.0", tk.END).strip()
    solution_code = text_solution.get("1.0", tk.END).strip()
    folder_name = entry_folder.get().strip()

    # Validation
    if not all([question, problem_stmt, solution_code, folder_name]):
        messagebox.showerror("Error", "All fields are required!")
        return

    # Create folder
    try:
        os.makedirs(folder_name, exist_ok=False)  # exist_ok=False raises error if exists
    except FileExistsError:
        messagebox.showerror("Error", f"Folder '{folder_name}' already exists. Please use another name.")
        return
    except Exception as e:
        messagebox.showerror("Error", f"Cannot create folder: {e}")
        return

    # Prepare README.md content
    readme_content = f"# {question}\n\n"
    readme_content += "## Problem Statement\n\n"
    readme_content += f"{problem_stmt}\n\n"
    readme_content += "## Solution\n\n"
    readme_content += f"```c\n{solution_code}\n```\n"

    # Write README.md
    readme_path = os.path.join(folder_name, "README.md")
    try:
        with open(readme_path, "w", encoding="utf-8") as f:
            f.write(readme_content)
    except Exception as e:
        messagebox.showerror("Error", f"Failed to write README.md: {e}")
        return

    # Write main.c
    main_c_path = os.path.join(folder_name, "main.c")
    try:
        with open(main_c_path, "w", encoding="utf-8") as f:
            f.write(solution_code)
    except Exception as e:
        messagebox.showerror("Error", f"Failed to write main.c: {e}")
        return

    messagebox.showinfo("Success", f"Files created successfully in:\n{os.path.abspath(folder_name)}")

# Create main window
root = tk.Tk()
root.title("README & C File Generator")
root.geometry("700x650")
root.resizable(True, True)

# Style
style = ttk.Style()
style.configure("TLabel", font=("Segoe UI", 10))
style.configure("TButton", font=("Segoe UI", 10, "bold"))

# Main frame
mainframe = ttk.Frame(root, padding="10")
mainframe.grid(row=0, column=0, sticky=(tk.W, tk.E, tk.N, tk.S))
root.columnconfigure(0, weight=1)
root.rowconfigure(0, weight=1)

# Question itself (heading)
ttk.Label(mainframe, text="Question itself (e.g., Q3: Write a Program...)").grid(row=0, column=0, sticky=tk.W, pady=(0,5))
entry_question = ttk.Entry(mainframe, width=80, font=("Segoe UI", 10))
entry_question.grid(row=1, column=0, sticky=(tk.W, tk.E), pady=(0,10))

# Problem Statement (multiline)
ttk.Label(mainframe, text="Problem Statement").grid(row=2, column=0, sticky=tk.W, pady=(0,5))
text_problem = scrolledtext.ScrolledText(mainframe, height=6, width=80, font=("Segoe UI", 10))
text_problem.grid(row=3, column=0, sticky=(tk.W, tk.E), pady=(0,10))

# Solution code (multiline)
ttk.Label(mainframe, text="Solution (C code)").grid(row=4, column=0, sticky=tk.W, pady=(0,5))
text_solution = scrolledtext.ScrolledText(mainframe, height=12, width=80, font=("Consolas", 10))
text_solution.grid(row=5, column=0, sticky=(tk.W, tk.E), pady=(0,10))

# Folder name
ttk.Label(mainframe, text="Folder name").grid(row=6, column=0, sticky=tk.W, pady=(0,5))
entry_folder = ttk.Entry(mainframe, width=80, font=("Segoe UI", 10))
entry_folder.grid(row=7, column=0, sticky=(tk.W, tk.E), pady=(0,20))

# Generate button
btn_generate = ttk.Button(mainframe, text="Generate Files", command=generate_files)
btn_generate.grid(row=8, column=0, pady=10)

# Configure grid weights for resizing
mainframe.columnconfigure(0, weight=1)
root.columnconfigure(0, weight=1)
root.rowconfigure(0, weight=1)

# Make the text areas expand vertically on window resize
mainframe.rowconfigure(3, weight=1)
mainframe.rowconfigure(5, weight=2)

root.mainloop()