#include<stdio.h>

    int main(){
    int a = 10 , b = 20;
    int *ptr1 , *ptr2;
    ptr1 = &a;
    ptr2 = &b;
    printf("the address of a is %d" , ptr1);
    printf("\nthe address of b is %d" , ptr2);

    int add = *ptr1 + *ptr2 ; 
    int sub = *ptr1 - *ptr2 ; 
    printf("\nthe addition of a and b is %d " , add);
    printf("\nthe subtraction of a and b is %d " , sub);

    if(*ptr1 > *ptr2)
    {
        printf("\na is greater than b");
    }
    else
    {
        printf("\nb is greater than a");
    }
     
return 0 ; 
}