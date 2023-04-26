#include<stdio.h>
#include<string.h>

    int main(){
    FILE *ptr;
    int num , num2 , num3 = 45;
    ptr = fopen("mustafa.txt" , "r");
    fscanf(ptr , "%d" , &num);
    fscanf(ptr , "%d" , &num2);
    
    printf("The value of num is %d\n" , num);
    printf("The value of num2 is %d\n" , num2);

    //fprintf(ptr ,"The number is %d" , num3);

    fclose(ptr);
return 0 ; 
}