#include<stdio.h>
#include<conio.h>
int main()
{
    int a , reverse;
    printf("enter any number:\n");
    scanf("%d",&a);
    for(reverse=0;a>0;a=a/10)
    {
        int i = a%10;
        reverse = (reverse*10)  + i;
    }
    printf("%d",reverse);
    return 0;
} /*
    1234
    12

    output

*/