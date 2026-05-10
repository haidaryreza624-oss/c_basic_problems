# Q6: Write a Program to check if the given number is Even or Odd.

## Problem Statement

In this problem, you have to write a program to check whether the given number is even or odd.

## Solution

```c
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number;
    printf("Enter The Number: ");
    scanf("%d",&number);
    if (number %2 == 0){
        printf("Even\n");
    }else if (number %2 !=0 ){
        printf("Odd\n");
    }else{
        printf("Zero\n");
    }
    return 0;
}
```
