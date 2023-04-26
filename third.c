#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0;
    printf("the values of a is %d\n",i);
    while(i<=20)
    {
       if(i<10)
       {
            i = i + 10;
       }
       else
       {
           printf("%d\n",i);
       }
        i++;
    }
    return 0;
}