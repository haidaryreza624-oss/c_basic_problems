#include <stdio.h>
#include <stdlib.h>

void print_int(int value){
    printf("%d\n",value);
}

int fibonachi(int n){
    if (n == 2){
        return 1;
    }else if (n == 1){
        return 0;
    }
    return fibonachi(n-1) + fibonachi(n-2);

}
int main()
{
    int number;
    printf("Enter Number: ");
    int pp = 0;
    int p = 1;



    scanf("%d",&number);
    print_int(pp);
    print_int(p);
    for (int i = 2; i < number; i++){
            int res= pp + p;
            print_int(res);
            pp = p;
            p = res;
    }

    return 0;
}
