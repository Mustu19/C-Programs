// #include<stdio.h>
// #include<string.h>

//     int main(){
//     int yr , n=0;
//     printf("Enter any year:");
//     scanf("%d" , &yr);
    
//     if(yr%4==0){
//         if(yr%100==0){
//             if(yr%400==0){
//                 n = 1 ; 
//             }
//             else{
//                 n = 0 ;
//             }
//         }
//         else{
//             n = 1 ;
//         }
//     }else{
//         n = 0 ; 
//     }

//     if(n == 1){
//         printf(" Leap Year");
//     }else{
//         printf("Not a Leap Year");
//     }
// return 0 ; 
// }

int fibo(int n);
#include<stdio.h>
#include<string.h>

    int main(){
    int n , f , i ;
    scanf("%d" , &n);
    for(i = 0; i < n ; i++)
    {
        f = fibo(i);
        printf("%d" , f);
    }
return 0 ;
}
int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return (fibo(n-2) + fibo(n-1));
    }
}