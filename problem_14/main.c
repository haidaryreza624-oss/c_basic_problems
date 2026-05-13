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