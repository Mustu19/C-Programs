#include<stdio.h>
#include<string.h>


void check(int arr[] , int n ){
    int i , j , temp ;
    for(i = 0 ; i < n - 1   ; i++){
        for(j = i+1 ; j < n ; j++){
            if(arr[i] > arr[j]){
                temp = arr[i] ;
                arr[i] = arr[j] ;
                arr[j] = temp ;
            }
        }
    }
    for(i = 0 ; i < n ; i++){
        printf("%d " , arr[i]);
    }
   // *max = arr[n-1] ;
   // *min = arr[0] ;
}
    int main(){

        int arr[] = { 5 ,30 ,1 ,9 , -5 ,0}  , n = 6;
        check(arr , n  ) ;
    //    printf("%d and %d.." , p , q);
return 0 ; 
}