// // #include<stdio.h>
// #include<string.h>

// struct employee{

//     int id ; 
//     char name[100];
//     struct address ad ;
// };
// struct address{
//     long int pin ;
//     char city[100];
// };
//     int main(){
//     struct employee e ; 
//     printf("Enter name , id , city , pincode of the employee : ");
//     scanf("%s %d %s %ld" , e.name , &e.id , e.ad.city , &e.ad.pin );
// return 0 ; 
// }

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void large(int arr[] , int n ){
    int max = 0 ,i ; 
    for ( i = 0; i < n ; i++)
    {
        printf("%d " , arr[i]);    
    }
} 
    int main(){
    
    // char ch;
    // ch = getchar();

    // if(isalpha(ch) > 0){
    //     printf("Character");
    // }
    // else  if(isdigit(ch) > 0){
    //     {
    //         printf("Digit");
    //     }
    // }
    // else{
    //     printf("Not alphanumeric");
    // }
    

    // float n = 98.7654; 
    // char str[30] = "Mustu" ; 
    // printf("\n%5.2f" , n);

    // int str[] = {2 , 5 ,7 , 8 ,10} , rstr[5] , i;
    // for ( i = 0; i < 5 ; i++){
    //     rstr[i] = str[5 - i - 1]; 
    // }
    // for ( i = 0; i < 5; i++)
    // {
    //     printf("%d " , rstr[i]);
    // }

    // char str[] = "MuStAfA KaPaSi" ;
    // int i ;
    // for (i = 0; str[i]!='\0'; i++)
    // {
    //     if(str[i]>='A' && str[i]<='Z'){
    //         str[i] = str[i] + 32 ; 
    //         printf("%c"  , str[i]);
    //     }
    //     else if(str[i]>='a' && str[i]<='z'){
    //         str[i] = str[i] - 32 ; 
    //         printf("%c"  , str[i]);
    //     }
    //     else{
    //         printf(" ");
    //     }
    // // }
    // int a = 3 , b = 5 , c= 4  , ans; 

    // ans = (a>b)? (a>c) ? a : c : (b>c) ? b : c ;
    // printf("%d" ,ans);

    // char str[100] ; 
    // scanf("%[^\n]" , str);
    // printf("%s" , str);

    // int arr[] = {1 , 3 , 5 ,7 ,9} , sarr[] = {2 , 4 , 6 , 8 , 10} , farr[100] , i  , j , temp, k;
    // for ( i = 0; i < 5 ; i++)
    // {
    //     farr[i] = arr[i] ; 
    //     farr[i+5] = sarr[i] ; 
    // }
    // // for (i = 0; i < 10; i++)
    // // {
    // //     printf("%d " , farr[i]);
    // // }
    // for (i = 0; i < 10; i++)
    // {
    //     for (j = i+1; i < 10; i++)
    //     {
    //         if(farr[i] > farr[j]){
    //             temp = farr[i] ; 
    //             farr[i] = farr[j];
    //             farr[j] = temp ; 
    //         }
    //     }
        
    // }
    // for (k = 0; k <  10 ; k++)
    // {
    //     printf("%d " , farr[k]);
    // }
    int arr[] = {3, 45 ,43 , 34 , 56};
    large(arr , 4);
    return 0 ;
}

