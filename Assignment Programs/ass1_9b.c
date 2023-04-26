#include<stdio.h>
#include<string.h>

    int main(){
    int i,j;
    for(i = 1 ; i<=5 ; i++){
        for(j = 1 ; j<=5 ; j++){
            if(i==1 || i==5) {
                printf(" * ");
            }
            else if((i>=2 && i<=4) && (j==1 || j==5)){
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