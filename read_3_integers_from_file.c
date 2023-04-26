#include<stdio.h>
#include<string.h>

    int main(){
    FILE *ptr;
    int num1 , num2 , num3;
    ptr = fopen("getdemoc.txt" , "r");
    fscanf(ptr , "%d" , &num1);
    fscanf(ptr , "%d" , &num2);
    fscanf(ptr , "%d" , &num3);
    fclose(ptr);

    printf("The numbers are %d %d and %d" , num1 , num2 , num3);
return 0 ; 
}