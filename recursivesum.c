#include<stdio.h>
#include<string.h>
#include<math.h>

int recursion(int x);
int main()
{
    printf("SUM OF N NATURAL NUMBERS:");
    int n;
    printf("\nenter the number till u want to add:\n");
    scanf("%d",&n);
    printf("\n%d" , recursion(n));
    return 0 ;
}

int recursion(int x)
{
     int sum = 0;
     for(int i = 1 ; i<=n ; i++)
    {
        sum = sum + i;
    }
   return sum;
}