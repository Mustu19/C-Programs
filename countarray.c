#include<stdio.h>
#include<string.h>

    int main(){
    int n[] = {1 , 2 , 3, 4 , 4 ,5 , 5 , 1  , 2 } ,  i  , j , count =0;
    
    for ( i = 0; i < 6; i++)
    {
        for ( j = i+1; j < 6; i++)
        {
            if(n[i] == n[j]){
                count++ ; 
                break;
            }
        }
    }
    printf("\nNumber occured %d times." ,  count);
return 0 ; 
}