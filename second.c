#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
            
int main()
{
   int a,b,c,d;
   printf("enter 4 numbers:\n");
   scanf("%d \n%d\n %d \n%d", &a , &b , &c , &d);
   if(a>b && b>c && c>d)
   {
       printf("a is greatest value");
   }
   else if(b>a && b>c && b>d)
   {
       printf("b is greatest");
   }
   else if(c>a && c>b && c>d)
   {
       printf("c is greatest");
   }
   else{
       printf("d is greatest");
   }

   
    return 0;
}