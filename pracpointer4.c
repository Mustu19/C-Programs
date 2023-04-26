#include<stdio.h>

void change(int x)
{
   // printf("%d" , &x);
    printf("\nthe value of i is %d" , x);
    printf("\nthe address of i is %u" , &x);
}
    int main(){
    int i = 10;
    printf("the value of i is %d" , i);
    printf("\n\nthe address of i is %u" , &i);
    change(i);
return 0 ; 
}
