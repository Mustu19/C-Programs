#include<stdio.h>
#include<string.h>

    int main(){
    FILE *fptr;
    int number = 45;
    fptr = fopen("writing.txt", "w");
    fprintf(fptr , "\nThe number is %d" , number);
    fprintf(fptr , "\nThanks for using fprintf" , number);
    //fscanf(fptr , "\nThe number is %d" , &number);
    fclose(fptr);
   /// printf("\nthe value of number is %d" , number);

return 0 ; 
}