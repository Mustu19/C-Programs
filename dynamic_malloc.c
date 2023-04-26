#include<stdio.h>
#include<string.h>
#include<stdlib.h>

    int main(){
    float *ptr;
    int num;
    printf("Enter the integers u want to enter :" );
    scanf("%d" , &num);
    ptr = (float *)malloc(num * sizeof(float));
    for(int i = 0 ; i<num ; i++){
        printf("Element %d : " , i+1);
        scanf("%f" , &ptr[i]);
    }

    free(ptr);
return 0 ; 
}