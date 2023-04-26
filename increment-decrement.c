#include <stdio.h>
#include <conio.h>
void main ()
{
    int a=5,b,c,d;
    b = ++a;
    c = a++;
    d = ++a;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c); //
    printf("d=%d\n",d);
    getch();

}