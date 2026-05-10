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