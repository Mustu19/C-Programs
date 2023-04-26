#include<stdio.h>
#include<string.h>
#include <stdlib.h>
    int main(){
    int *ptr , num;
    printf("Enter the numbers u want to array :");
    scanf("%d" , &num);
    ptr =(int *)malloc(num * sizeof(int));
    for(int i = 0 ; i< num ; i++){
        printf("\nElement %d : " , i+1);
        scanf("%d"  ,&ptr[i]);
        free(ptr);
    }
return 0 ; 
}