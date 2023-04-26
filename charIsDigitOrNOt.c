#include<stdio.h>
#include<string.h>

    int main(){
    int n , i , temp  , j;
    printf("Enter the range of prime numbers : ");
    scanf("%d" , &n);
    for(j = 1  ; j <= n ; j++){
        temp = 0 ;
        for(i = 1; i <= j ; i++){
       if(j%i==0){
           temp++ ; 
       }
    }
    if(temp==2){
        printf("\n%d " , j  );
    } 
}
    
return 0 ; 
}