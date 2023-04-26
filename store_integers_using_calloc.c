#include<stdio.h>
#include<string.h>
#include<stdlib.h>

    int main(){
    int *ptr;
    int num;
    printf("Enter the value of num : ");
    scanf("%d" , &num);
    ptr = (int *)calloc(num,sizeof(int));
    for(int i = 0 ; i<num; i++){
        printf("\nElement %d :" , i+1);
        scanf("%d" , &ptr[i]);
    }
    ptr = realloc(ptr, (num*2) * sizeof(int));

    for(int i = 0 ; i<num*2; i++){
        printf("\nElement %d : " , i+1);
        scanf("%d" , &ptr[i]);
    }
return 0 ; 
}