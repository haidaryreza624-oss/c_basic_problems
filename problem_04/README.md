# Q4: Write a Program to Swap the values of two variables.

## Problem Statement

In this problem, you have to write a program that swaps the values of two variables that are entered by the user.

## Solution

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int b = 20;
    a = a^b;
    b = a^b;
    a  = a^b;
    printf("%d\n",a);
    printf("%d\n",b);




    return 0;
}
```
