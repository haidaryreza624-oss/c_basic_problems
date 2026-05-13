# Q15: Write a Program to rotate the array to the left.

## Problem Statement

In this problem, you have to write a program that takes an array arr[] of size N from the user and rotates the array to the left (counter-clockwise direction) by D steps, where D is a positive integer.

## Solution

```c
#include <stdio.h>
#include <stdlib.h>

void print_int(int value){
    printf("%d ",value);
}
void print_arr(int arr[], int n){
    for(int i =0;i <= n;i++){
        print_int(arr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5 ,6};
    int d =0;
    int i;
    int j;
    printf("Enter the Rotation Number for {1, 2, 3, 4, 5 ,6}: ");
    scanf("%d",&d);
    if (d > 6){
        d = d%6;
    }
    //REVERSING ARRAY[0:n-d]
    i = 0;
    j = 6-d-1;
    while (i < j){
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];
        i +=1;
        j -=1;
    }
    
    //REVERSING ARRAY[n-d:n]
    i = 6-d;
    j = 5;
    while (i < j){
            arr[i] = arr[i] + arr[j];
            arr[j] = arr[i] - arr[j];
            arr[i] = arr[i] - arr[j];
            i +=1;
            j -=1;
    }
    
    //REVERSING ARRAY[0:n]
    i = 0;
    j = 5;
    while (i < j){
        arr[i] = arr[i] + arr[j];
            arr[j] = arr[i] - arr[j];
            arr[i] = arr[i] - arr[j];
            i +=1;
            j -=1;
    }
    print_arr(arr,5);
    return 0;

}
```
