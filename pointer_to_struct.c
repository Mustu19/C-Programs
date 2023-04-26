#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    char name[50];
};
    int main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;

    //(*ptr).code = 78; we can also write this as below.

    ptr->code = 98;
    printf("%d" , e1.code);
    printf("\n%s" , strcpy(e1.name , "Mustu bhai"));

return 0 ; 
}