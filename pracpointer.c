#include<stdio.h>
void print(int i);
    int main(){
    // int a = 6;
    // int *j;
    // j = &a;
    // printf("The address of variable a is %u" , j);
    // printf("\n\nthe address of variable a is %d" , *j);
    int i = 5;
    printf("The value of variable i is %d" , i);
    print(i);
    printf("\nThe address of variable i is %u" , &i);
    return 0 ; 
}

void print(int i)
{
    printf("\nthe address of variable i is %u" , &i);
}

//by seeing output we see that both the address are not equal.