#include<stdio.h>
#include<string.h>

    int main(){
    int i , j , k ;
    for(i = 1 ; i<=6 ; i++){
        for(j = 1 ; j<=6 ; j++){
            if(i==1 || i==6){
                printf(" * ");
            }
            else if(i+j==7){
                printf(" * ");
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
return 0 ; 
}