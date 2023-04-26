#include<stdio.h>
#include<math.h>

int function();
int main()
{
 //printf("hello world\n");
 //int a = 5;
 //-printf("%d %d %d" , a , ++a , a++);
    printf("calling the function");
    function();

    return 0;
}

int function()
{
    printf("function called");
    return 0 ;
}
