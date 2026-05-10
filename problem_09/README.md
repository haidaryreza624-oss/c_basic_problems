# Q9: Write a Program to find the factorial of a given number.

## Problem Statement

In this problem, you have to write a program to calculate the factorial (product of all the natural numbers less than or equal to the given number n) of a number entered by the user.

## Solution

```c
#include <stdio.h>
#include <stdlib.h>

void print_int(int value){
    printf("%d\n",value);
}
int factorial(int value){
    if (value == 1){
        return 1;
    }
    return value * factorial(value-1);
}


int main()
{
    int result;
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    result  = factorial(num);
    print_int(result);



    return 0;
}
```
