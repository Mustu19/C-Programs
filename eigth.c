#include<stdio.h>
#include<conio.h>
int main()
{
    int n ,count =0;
    printf("enter any number to check its divisibility: ");
    scanf("%d" , &n);
    for(int i=2 ; i<n ; i++)
    {
        if(n%i==0)
            count++;
    }
    if(count!=0)
    {
        printf("not a  prime");
    }
    else{
        printf("prime number");
    }
    return 0 ;
}