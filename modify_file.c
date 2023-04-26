#include<stdio.h>
#include<string.h>

    int main(){
    int num;
    FILE *ptr;
    ptr = fopen("previous.txt" , "r");
    fscanf(ptr , "%d" , &num);
    printf("The value of previous text file is %d",num);
    fclose(ptr);

    FILE *ptr2;
    ptr2 = fopen("new.txt" , "w");
    fprintf(ptr , "The double value of integer is %d" , (num+num));
return 0 ; 
}