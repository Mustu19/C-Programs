// #include<stdio.h>

// void sumAndavg(int a , int b , int *sum , float *avg)
// {
//      *sum = a+b;
//      *avg = (float)(*sum)/2;
// }
//     int main(){
//     int i , j , sum;
//     float avg;
//     i = 3;
//     j = 6;
//     sumAndavg(i , j , &sum , &avg);
//     printf("the value of sum is %d" , sum);
//     printf("\nthe value of sum is %f" , avg);

// return 0 ; 
// }

#include<stdio.h>
#include<string.h>

void sumAndavg(int a , int b , int *sum , float *avg ){

    *sum = a+b;
    *avg = (float)(*sum/2);
}
    int main(){
    int i , j , sum ;
    i=19 ; j = 21;
    float avg;
    sumAndavg(i , j ,&sum , &avg);
    printf("Sum is %d and Average is %.1f" , sum , avg);
return 0 ; 
}