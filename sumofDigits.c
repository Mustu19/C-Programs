#include<stdio.h>
#include<string.h>
#include<math.h>

int power(int n ){
    
    int i   , temp ; 
    for(i = 1 ; i<=n ; i++){
        if(i*i == n){
            temp = i ; 
        }
    }
    return temp ; 
}

    int main(){
    int n  , ans;
    printf("Enter number: ");
    scanf("%d" , &n);
    ans = power(n);
    printf("\n\n%d" , ans);
return 0 ; 
}