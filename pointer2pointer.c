#include<stdio.h>

    int main(){
    int i = 345;
    int *ptr;
    int **ptr_ptr;

    ptr = &i;
    printf("the value of a is %d" ,*ptr);

    ptr_ptr = &ptr;
    printf("\nthe value of a is %d" ,**ptr_ptr);
return 0 ; 
}