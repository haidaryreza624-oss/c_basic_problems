# Q8: Write a Program to make a simple calculator.

## Problem Statement

In this problem, you have to write a program to make a simple calculator that accepts two operands and an operator to perform the calculation and prints the result.

## Solution

```c
#include <stdio.h>
#include <stdlib.h>

void print_int(int value){
    printf("%d\n",value);
}


int main()
{
    int num[3];
    char operand;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c",&operand);
    printf("Enter Number 1: ");
    scanf("%d",&num[0]);
    printf("Enter Number 2: ");
    scanf("%d",&num[1]);

    if (operand == '+'){
        num[2] = num[0] + num[1];
    }else if (operand == '-'){
        num[2] = num[0] - num[1];
    }else if (operand == '/'){
        num[2] = num[0] / num[1];
    }else if (operand == '*'){
        num[2] = num[0] * num[1];
    }
    print_int(num[2]);




    return 0;
}
```
