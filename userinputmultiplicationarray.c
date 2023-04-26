#include<stdio.h>

void printTable(int mulTable[] , int num , int n)
{
    printf("The multiplication table of %d is : \n\n" , n);
    for(int i = 0 ; i<num ; i++)
    {
        printf("%d x %d = %d\n" , n , i+1 , n*(i+1));
    }
}
    int main(){
    
    int m ,n;
    printf("Enter the number of tables you want to print and till how much number :");
    scanf("%d %d" , &m , &n);
    int mulTable[m][n];
    int number = 1;
    for(int i = 0 ; i<m ; i++)
    {
        printTable(mulTable[i] , n  , number);
        number++;
    }
return 0 ; 
}