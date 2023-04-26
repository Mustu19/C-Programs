#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a;
    printf("enter any value of natural number:");
    scanf("%d" , &a);
    for(i = a ; i>=0 ; i--)
    {
        printf("%d\n",i);
    }
}