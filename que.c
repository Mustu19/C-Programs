#include<stdio.h>
#include<string.h>

    int main(){
    int row , col , i , j ;
    printf("Enter the rows and columns :");
    scanf("%d %d" , &row , &col);
    int arr[row][col] ;
    for(i = 0 ; i < row  ; i++){
        for(j = 0 ; j < col ; j++){
            scanf("%d" , &arr[i][j]);
        }
    }
    for(i = 0 ; i < row  ; i++){
        for(j = 0 ; j < col ; j++){
            if(arr[i][j] == 0){
                for(int k = 0 ; k < row ; k++){
                    arr[k][j] = 0 ;
                }
                for(int m = 0 ; m < col ; m++){
                    arr[i][m] = 0 ;
                }
            }
        }
    }
    for(i = 0 ; i < row  ; i++){
        for(j = 0 ; j < col ; j++){
            printf("%d " , arr[i][j]);
        }
    }
return 0 ; 
}