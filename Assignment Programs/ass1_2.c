// #include<stdio.h>
// #include<string.h>

//     int main(){
//     int a, b, c , max ;
//     printf("Enter 3 numbers : ");
//     scanf("%d %d %d" , &a , &b , &c);
//     max = (a>b)?((a>c)? a : c ) : ((b>c) ? b : c);
//     printf("%d is greatest." , max);

// return 0 ; 
// }


#include<stdio.h>
#include<string.h>

    int main(){
    int a = 3 , b = 4 , c = 5 , max;
    max = (a>b)?(a>c) ? a : c : (b>c) ? b : c ;
    printf("%d is greatest",max);
return 0 ; 
}