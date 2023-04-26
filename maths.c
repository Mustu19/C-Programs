#include<stdio.h>
#include<stdlib.h>

void sum()
{
   int a , b;
    printf("enter 2 numbers a and b: ");
    scanf("%d %d" , &a , &b);
    int c  = a + b;
    printf("\nAddition is %d\n" , c);
}
void sub()
{
    int a , b;
    printf("enter 2 numbers a and b: ");
    scanf("%d %d" , &a , &b);
    int c = a - b;
    printf("\nSubtraction is %d\n" , c);
}
void mul()
{
    int a , b;
    printf("enter 2 numbers a and b: ");
    scanf("%d %d" , &a , &b);
    int c = a*b;
    printf("\nMultiplication is %d\n" , c);
}

int main()
{
    // void sum();
    // void sub();
    // void mul();
    sum();
    sub();
    mul();
    return 0;
}

