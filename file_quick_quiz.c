#include<stdio.h>
#include<string.h>

    int main(){
    FILE *ptr;
    int num , num1;
    ptr = fopen("Mustu.txt" , "r");
    if(ptr==NULL){
        printf("This file does not exists.");
    }
    else{
        fscanf(ptr , "%d" , &num);
        fscanf(ptr , "%d" , &num1);
        fclose(ptr);

        printf("The value of num is %d\n" , num);
        printf("The value of num1 is %d\n" , num1);
    }
return 0 ; 
}