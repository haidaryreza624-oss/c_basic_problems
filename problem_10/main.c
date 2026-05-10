#include <stdio.h>
#include <stdlib.h>

void print_int(int value){
    printf("%d\n",value);
}

int power_(int base,int power){
    if (power == 0){
        return 1;
    }
    return base * power_(base,power-1);
}

int main()
{
    int number;
    int tawan  =0;
    int result;
    int mul;
    printf("Enter Binary Number: ");

    scanf("%d",&number);
    while (number){
        int remainder = number %2;
        mul = power_(2,tawan);
        result += (remainder*mul);
        number = number/10;
        tawan +=1;
    }
    print_int(result);
    return 0;
}