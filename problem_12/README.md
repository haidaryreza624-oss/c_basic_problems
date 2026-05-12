# Q12: Write a Program to Calculate the Sum of Natural Numbers using recursion.

## Problem Statement

In this problem, you have to write a program to calculate the sum of natural numbers up to a given number n.

## Solution

```c
#include <stdio.h>
#include <stdlib.h>

void print_int(int value){
    printf("%d\n",value);
}
int  calc_sum(int number){

    if (number == 0){
        return 0;
    }

    return number + calc_sum(number-1);
}
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d",&number);
    print_int(calc_sum(number));

    return 0;
}
```
