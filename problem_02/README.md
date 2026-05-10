# Q2: Write a Program to find the Sum of two numbers entered by the user.

## Problem Statement

In this problem, you have to write a program that adds two numbers and prints their sum on the console screen.

## Solution
```c
#include <stdlib.h>
#include <stdio.h>
int main(){
    int num1;
    int num2;
    printf("Enter Your Operands: ");

    scanf("%d %d",&num1,&num2);
    printf("The Result is: %d",num1+num2);

}