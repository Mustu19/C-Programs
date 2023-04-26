#include<stdio.h>
#include<string.h>

    int main(){
    int i , j  , k , n = 0;
    
    for(i = 1 ; i <= 4 ; i++){
        for(j = 1 ; j < 4-i ; j++){
            printf(" ");
        }
        for(k = 1 ; k <= i ; k++){
            printf(" %d " , ++n);
        }
        printf("\n");
    }
return 0 ; 
}