#include<stdio.h>
#include<conio.h>
int main()
{
    // int n = 8 , sum=0 , res;
    // for(int i = 1 ; i<=10 ; i++)
    // {
    //     res = n*i;
    //     printf("\n%d" ,res);
    //     sum = sum + res;
    // }
    // printf("\n\n\t THE SUM OF TABLE OF 8 IS %d" , sum);

    int n , fact = 1;
    printf("\nEnter number:");
    scanf("%d", &n);
    for(int i = 1; i<=n ; i++)
    {
        fact = fact * i;
        //n--;
    }
    printf("\n%d", fact);
    return 0;
}