// #include<stdio.h>
// #include<string.h>

//     int main(){
//         int n1 , n2 , i , j , a1[100000] , a2[100000] , count=0;
//         printf("Enter 2 numbers:");
//         scanf("%d %d" , &n1 , &n2);
//         for(i = 1 ; i<=n2 ; i++){
//             a1[i] = i*n1 ; 
//             a2[i] = i*n2 ; 
//         }
//         for ( i = 1; i <= n1; i++)
//         {
//             for ( j = 1; j <= n2; j++)
//             {
//                 if(a1[i] == a2[j]){
//                     count++;
//                     if(count==1){
//                         printf("LCM is %d." , a1[i]);
//                     }
//                     else{
//                         break;
//                     } 
//                 }
//             }  
//         }
// return 0 ; 
// }


#include <stdio.h>
int main() {
    int n1, n2, max , gcd , i ;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // maximum number between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }

    for(i=1; i <= n1 && i <= n2; ++i)  // 6   4 
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("\nG.C.D of %d and %d is %d", n1, n2, gcd);


    return 0;
}
