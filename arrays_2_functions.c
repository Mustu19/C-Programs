// #include<stdio.h>

// void printArray(int ptr[] , int n)
// {
//     for(int i = 0 ; i<n ; i++)
//     {
//         printf("The value of element %d is %d\n" , i , ptr[i]);
//     }
//     ptr[2] = 786; // This value will change in arr array of main as well
// }
//     int main(){
//     int arr[] = {10 , 20 , 30 , 40 , 50 , 60};
//     printArray(arr,6);
//     printf("\n%d" , arr[2]);
//     return 0 ; 
// }


#include<stdio.h>
#include<string.h>

void printArray(int ptr[]  , int n){
    int i ;
    for(i=0 ; i<n ; i++){
        printf("the element %d is %d ." , i , ptr[i] );
    }
}

    int main(){
    int arr[] = {10 , 20 , 30} ; 
    printArray(arr , 3);
return 0 ; 
}