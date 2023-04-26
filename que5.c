#include<stdio.h>
#include<string.h>

void check(int arr[] , int tar , int *a , int *b){
        int i , j , c ;
        for(i = 0 ; i < 4  ; i++){
            for(j = i+1 ; j < 5 ; j++){
                c = arr[i] + arr[j] ;
                if(c == tar){
                    *a = i ;
                    *b = j ;
                }
            }
        }
}
    int main(){
        int p , q ;
        int arr[] = { 1 ,3 ,5 ,7 ,9} , tar = 8 ;
        check(arr , tar , &p , &q ) ;
        printf("a[%d] and a[%d].." , p , q);
return 0 ; 
}
