#include<stdio.h>

void count(int *arr , int n)
{
    int Count=0;
    for(int i = 0 ; i<n;i++)
    {
        if(arr[i]>0)
        {
            Count++;
        }
    }
    printf("total number of positive integers in the array is %d" , Count);
}
    int main(){
    int arr[] = {1,2,3,-4,-5,-6 ,-7 ,9 ,10};
    count(arr,9);
return 0 ; 
}