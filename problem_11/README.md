# Q11: Write a Program to print the Fibonacci series using recursion.

## Problem Statement

In this problem, you have to write a program to print the Fibonacci series(the sequence where each number is the sum of the previous two numbers of the sequence) till the number entered by the user using recursion.

## Solution

```c
#include <stdio.h>
#include <stdlib.h>

void print_int(int value){
    printf("%d",value);
}

int fibonachi(int n){
    if (n == 2){
        return 1;
    }else if (n == 1){
        return 0;
    }
    return fibonachi(n-1) + fibonachi(n-2);

}
int main()
{
    int number;
    printf("Enter Number: ");

    scanf("%d",&number);
    for (int i = 1; i <= number; i++){
        print_int(fibonachi(i));
    }

    return 0;
}
```
