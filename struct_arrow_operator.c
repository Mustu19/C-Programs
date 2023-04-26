#include<stdio.h>
#include<string.h>

struct arrowOperator{
    int a,b;
};
    int main(){
    struct arrowOperator ao;
    struct  arrowOperator *ptr;

    ptr = &ao;

    //(*ptr).a = 35;
    //(*ptr).b = 45;

    ptr->a = 35;
    ptr->b = 45;

    printf("The value of a and b is %d and %d" , ao.a ,ao.b);
return 0 ; 
}