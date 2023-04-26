#include<stdio.h>
#include<string.h>
#include<stdlib.h>

    int main(){
    char *ptr , arr[100];
    int size , i;

    printf("Enter the size of Character String : ");
    scanf("%d" ,&size);

    ptr = (char*)malloc(size * sizeof(char));

    printf("Enter the String:");
    scanf("%s" ,arr);
    strcpy(ptr , arr);
    printf("\nString is %s.",ptr);

    fflush(stdin);

    printf("\nEnter new size of String:\n");
    scanf("%d", &size); 

    ptr = realloc(ptr , size * sizeof(char));
    printf("Enter New String:");
    scanf("%s" ,arr);
    strcpy(ptr , arr);
    
    printf("\nNew string %s.",ptr);
 
    free(ptr);
 
    return 0;
}