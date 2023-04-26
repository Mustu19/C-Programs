#include<stdio.h>
#include<string.h>

    int main(){
    FILE *ptr;
    int num;
    printf("\nEnter the multiplication table u want to print:");
    scanf("%d" , &num);
    ptr = fopen("table.txt" , "w");
    for(int i=1 ; i<=10; i++){
        fprintf(ptr , "\n%d X %d = %d" ,num , i , (i*num));
    }
    fclose(ptr);
    
return 0 ; 
}