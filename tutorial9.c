#include<stdio.h>
#define PI 3.14
int main()
/* This is multi line compiler.

It is ignored by my compiler
*/
{
   int a = 8;
   const float b= 7.333;
   //PI = 7.33; //cannot do this since PI is a constant

   printf("tab character \t my backslash  %.2f", PI);
   // b=7.22; //cannot do this since b is a constant 
    //printf("Hello World!\n");
    //printf("THe value of a is %d and the value of b is 
    //printf("%18.4f this \n",b); 


 return 0;
}
