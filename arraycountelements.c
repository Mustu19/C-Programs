#include<stdio.h>
#include<string.h>


void count(int number  , int array[]){
    int count= 0  , i ;
    for(i = 0 ; i < 6 ; i++){
        if(number == array[i]){
            count++ ; 
        }
    }
    printf("\nThe element %d is occured %d times . " , number , count);
}
    int main(){
    
    int arr[] = {1 , 3, 3,  4,  5 , 5}  , i  , num ; 
    for(i= 0 ; i<6 ; i++ ){
        num = arr[i] ;        
        count(num , arr);
    }
    
return 0 ; 
}