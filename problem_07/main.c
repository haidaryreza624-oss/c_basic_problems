#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num[3];

    printf("Enter Number 1: ");
    scanf("%d",&num[0]);
    printf("Enter Number 2: ");
    scanf("%d",&num[1]);
    printf("Enter Number 3: ");
    scanf("%d",&num[2]);
    int largest = num[0];
    for (int i = 1; i < 3; i++){
        if (num[i] > largest){
            largest = num[i];
        }
    }
    printf("%d",largest);
    return 0;
}