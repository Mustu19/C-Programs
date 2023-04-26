#include<stdio.h>

    int main(){
    //char c = 34;
    //int i = 20;
    float f = 40;
    float *ptr = &f;
    printf("the value of ptr is %u\n" , ptr); 
    //ptr--;
    ptr++;
    ptr++;

    //ptr  = ptr - 1;
    // ptr = ptr + 1;

     // ptr ++ is same as ptr = ptr + 1
    printf("the value of ptr is %u" , ptr); 
return 0 ; 
}