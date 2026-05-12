#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {4, 7, 2, 1, 9};
    int smallest =  arr[0];
    int largest = arr[0];
    for (int i =1;i <=4; i++){
        if (arr[i] < smallest){
            smallest = arr[i];
        }
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    printf("Larges: %d\n",largest);
    printf("Smallest: %d\n",smallest);


}