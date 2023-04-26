#include<stdio.h>
#include<string.h>
#include<stdlib.h>

    int main(){
        int *ptr;
        int num;
        printf("Enter the number of table : ");
        scanf("%d" , &num);
        ptr = (int *)malloc(10 * sizeof(int));

        for(int i = 0 ; i < 10 ; i++){
            printf("\n%d X %d = %d" , num , i+1 , num*(i+1));
        }
        printf("\n\n");
        ptr = realloc(ptr , 15 * sizeof(int));
        for(int i = 0 ; i < 15 ; i++){
            printf("\n%d X %d = %d" , num , i+1 , num*(i+1));
        }

return 0 ; 
}