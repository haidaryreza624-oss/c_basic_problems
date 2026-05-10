#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int sizeOf(char dataType[]);

int main(){

    char dataType[8];
    printf("Enter Variable Name (float, int, double or char): ");
    scanf("%s",&dataType);

    printf("Size of %s is %d",dataType,sizeOf(dataType));

}
int sizeOf(char dataType[]){

    if(strcmp(dataType,"char") == 0){
        return 1;
    }else if (strcmp(dataType,"int") == 0 || strcmp(dataType,"float") == 0){
        return 4;
    }else if (strcmp(dataType,"double") == 0){
        return 8;
    }else{
        return 0;
    }
}
