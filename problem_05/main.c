#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double principle = 1200;
    double time = 2;
    double rate = 5.4;
    double result = principle *
                  ((pow((1 + rate / 100),
                    time)));
    printf("%f",result);
    return 0;
}