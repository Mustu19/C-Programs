#include<stdio.h>
#include<string.h>
#include<stdlib.h>

    int main(){
    int *ptr;
    int size ;
    printf("Enter the size of table:");
    scanf("%d" , &size);

    printf("\nThe size of int on my pc is %d" , sizeof(int));
   //  printf("\nThe size of float on my pc is %d" , sizeof(float));
    // printf("\nThe size of char on my pc is %d" , sizeof(char));

    ptr = (int *)malloc(size * sizeof(int));

    for(int i = 0 ; i<size;i++){
        printf("\nEnter the value of %d element : " , i+1);
        scanf("%d" , &ptr[i]);       
    }
    for(int i = 0 ; i<size;i++){
        printf("\nThe value of %d element is %d and its address is %u. " , i+1 , *ptr ,  ptr);
        ptr++;
    }
return 0 ; 
}