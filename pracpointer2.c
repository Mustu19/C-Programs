#include<stdio.h>

void reference(int *x)
{
    int i;
    i = *x;
    printf("\n\nthe value of a in the reference is %d" ,i*10);
}

    int main(){
    int a = 5;
    printf("the value of a is %d and its address is %u" , a , &a);

    reference(&a);
return 0 ; 
}