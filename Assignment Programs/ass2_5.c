// #include<stdio.h>
// #include<string.h>

// int reverse(int n){
//     int i ;
//     static int num = 0 ; 
//     if(n>0){
//         i = n%10 ; 
//         num = num*10 + i ; 
//         reverse(n/10) ; 
//         return num ;
//     }     
// }

//     int main(){
//     int n , ans;
//     printf("Enter any number:");
//     scanf("%d" , &n);
//     ans = reverse(n) ; 
//     printf("The reverse of given number is %d." , ans);
// return 0 ; 
// }








int reverse(int n ){

    int i ;
    static int  ans = 0;
    if(n>0){
        i = n%10;
        ans = ans*10 + i ; 
        reverse(n/10) ; 
    }
    return ans;
 }

#include<stdio.h>
#include<string.h>

    int main(){
        int n , rev;
        printf("Enter any number:");
        scanf("%d" , &n);
        rev = reverse(n);
        printf("Reverse of the number is %d." , rev); 
    
return 0 ; 
}






















