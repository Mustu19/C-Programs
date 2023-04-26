#include<stdio.h>
#include<string.h>
#include<stdlib.h>

    int main(){
    int *ptr;

    // printf("\nThe size of int on my pc is %d" , sizeof(int));
    // printf("\nThe size of float on my pc is %d" , sizeof(float));
    // printf("\nThe size of char on my pc is %d" , sizeof(char));

    ptr = (int *) malloc (6 * sizeof(int));

    for(int i = 0 ; i<6;i++){
        printf("\nEnter the value of %d element : " , i+1);
        scanf("%d" , &ptr[i]);       
    }
    for(int i = 0 ; i<6;i++){
        printf("\nThe value of %d element is %d: " , i , ptr[i]);
    } 


    //  realloc the size of ptr

    ptr = realloc(ptr , 10*sizeof(ptr));
    for(int i = 0 ; i<10;i++){
        printf("\nEnter the value of %d element : " , i+1);
        scanf("%d" , &ptr[i]);       
    }
    for(int i = 0 ; i<10;i++){
        printf("\nThe value of %d element is %d: " , i , ptr[i]);
    }
return 0 ; 
}