#include<stdio.h>
#include<string.h>

int even(int n ){
   
   int i = 1 ;
   if(i<=n){
       if(n%2==0){
           i = i + 1 ; 
        printf("%d " , n);
        even(n-1);
    }
    else{
        i = i + 1 ; 
        even(n-1) ; 
    }
   }
    
    return 0 ;
}
int main(){
    int n ; 
    printf("Enter the number till u want even number : ");
    scanf("%d" , &n);
    even(n);
   return 0 ;
}