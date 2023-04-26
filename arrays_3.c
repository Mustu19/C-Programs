#include<stdio.h>
#include<string.h>
void reverse(int *arr, int n){
    for(int i=0; i<7; i++)
    arr[0]=arr[6];
    arr[1]=arr[5];
    arr[2]=arr[4];
}
    
    int main(){
       int arr[7]={1,2,3,4,5,6,7};
        reverse(arr,7);
         for(int i=0; i<7; i++){
            printf("%d",arr[i]);}
return 0 ; 
}