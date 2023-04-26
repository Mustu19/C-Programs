#include<stdio.h>

void sumAndavg(int a , int b , int *sum , float *avg)
{
     *sum = a+b;
     *avg = (float)(*sum)/2;
}
    int main(){ 
    int i , j , sum;
    float avg;
    i = 3;
    j = 6;
    sumAndavg(i , j , &sum , &avg);
    printf("the value of sum is %d" , sum);
    printf("\nthe value of sum is %f" , avg);

return 0 ; 
}