# Q5: Write a Program to calculate Compound Interest.

## Problem Statement

In this problem, you have to write a program that takes principal, time, and rate as user input and calculates the compound interest.

## Solution

```c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double principle = 1200;
    double time = 2;
    double rate = 5.4;
    double result = principle *
                  ((pow((1 + rate / 100),
                    time)));
    printf("%f",result);
    return 0;
}
```
