#include <stdio.h>
#include <stdlib.h>

void print_int(int value){
    printf("%d\n",value);
}
int factorial(int value){
    if (value == 1){
        return 1;
    }
    return value * factorial(value-1);
}


int main()
{
    int result;
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    result  = factorial(num);
    print_int(result);



    return 0;
}