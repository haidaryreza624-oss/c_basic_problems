# Q14: Write a Program to Reverse an Array.

## Problem Statement

In this problem, you have to write a program to reverse an array of size n entered by the user. Reversing an array means changing the order of elements so that the first element becomes the last element and the second element becomes the second last element and so on.

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
    int i = 0;
    int j = 5;

    while (i < j){
            arr[i] = arr[i] + arr[j];
            arr[j] = arr[i] - arr[j];
            arr[i] = arr[i] - arr[j];
            i +=1;
            j -=1;
    }
    print_arr(arr,5);


}
```
