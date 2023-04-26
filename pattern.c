// #include<stdio.h>
// #include<string.h>

//     int main(){
//     int row , col , no , s;
//     printf("Enter no. of rows : ");
//     scanf("%d" , &no);
    
//     for(row=1; row <= no ; row++){
//         for(s=1 ; s<= no - row ; s++){
//             printf(" ");
//         }
//         for(col=1 ; col<=row;col++){
//             printf("*");
//         }
//         printf("\n");
//         return 0;
//     }

// #include<stdio.h>
// #include<string.h>

//     int main(){
//     int i , j , n = 4  , totalCols;
//     for(i=1; i<=2*n; i++){

//         if(i>n){
//             totalCols = (2*n) - i ;
//         }
//         else{
//             totalCols = i ; 
//         }
//         for(j = 1 ; j <= totalCols ; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// return 0 ; 
// }




// 1 *
// 2 * *
// 3 * * *
// 4 * * * *
// 5 * * * * *
// 6 * * * *
// 7 * * *
// 8 * *
// 9 * 

// #include<stdio.h>
// #include<string.h>

//     int main(){
//     int i , j , k , n = 4 , totalCols , space;
//     for(i=0 ; i < 2*n ;i++){

//         if(i>n){
//             totalCols = (2*n) - i ;
//             space = n - totalCols ;
//         }
//         else{
//             totalCols = i ;
//             space = n - totalCols ;
//         }
//         for(j = 0 ; j < space  ; j++){
//             printf(" ");
//         }
//         for(k=0 ; k < totalCols ; k++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// return 0 ; 
// }


// #include<stdio.h>
// #include<string.h>

//     int main(){
//     int i , j , k , n = 4 , c , space ;

//     for(i = 1 ; i <= (2*n) - 1 ; i++){

//         if(i>n){
//             c = (2*n) - i ;     
//             space = n - c ;
//         }
//         else{
//             c = i;
//             space = n - c ; 
//         }
//         for(j = 1 ; j <= space ; j++){
//             printf("  ");
//         }
//         for(k=c ; k>=1 ; k--){
//             printf("%d " , k);
//         }
//         for(k=2 ; k<=c ; k++){
//             printf("%d " , k);
//         }
//         printf("\n");
//     }
// return 0 ; 
// }

#include<stdio.h>
#include<string.h>

    int main(){
    int i , j , atIndex ,  n = 4 ; 
    for(i = 0 ; i < (2*n) - 1 ; i++){
        for(j = 0 ; j < (2*n) - 1 ; j++){
            atIndex = n  ; 
            printf("%d " , atIndex);
        }
            printf("\n");
    } 
return 0 ; 
}