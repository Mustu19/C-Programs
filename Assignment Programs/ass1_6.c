#include<stdio.h>
#include<string.h>

    int main(){
    int n , sum = 0  , fDigit , lDigit ; 
    printf("Enter the four digit number  : ");
    scanf("%d" , &n);

    lDigit = n % 10 ; 

    while(n>=10){  
        n = n / 10 ;   
    }

    fDigit = n ; 

    sum = fDigit + lDigit ; 
    
    printf("Sum of First and Last digit is %d." , sum);

return 0 ; 
}