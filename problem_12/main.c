#include <stdio.h>
#include <stdlib.h>

void print_int(int value){
    printf("%d\n",value);
}
int  calc_sum(int number){

    if (number == 0){
        return 0;
    }

    return number + calc_sum(number-1);
}
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d",&number);
    print_int(calc_sum(number));

    return 0;
}