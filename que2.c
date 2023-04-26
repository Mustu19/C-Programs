#include<stdio.h>
#include<string.h>

    int main(){
    int arr[5] = {1, 2, 3 , 2 ,6} , i ,j ;
    for(i = 0 ; i < 4 ; i++){
        for(j = i+1 ; j < 5 ; j++){
            if(arr[i] == arr[j]){
                printf("Duplicate number is %d." , arr[i]);
            }
        }
    }
return 0 ; 
}