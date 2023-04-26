#include<stdio.h>
#include<string.h>
#include<stdlib.h>

    int main(){
    float *str ;
    int num ; 
    scanf("%d" , &num);
    str = (float *)malloc(num * sizeof(float));
    for(int i = 0 ; i < num ; i++){
        printf("\nEnter the value of %d element : " , i+1 );
        scanf("%f" , &str[i]);
    }
    for(int i = 0 ; i < num ; i++){
        printf("\nThe values of %d element is %.1f" , i+1 , str[i]);
    }
return 0 ; 
}