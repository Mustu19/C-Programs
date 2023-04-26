#include<stdio.h>
#include<string.h>

    int main(){
    char str1[100] , str2[100] ;  
    printf("Enter 2 Strings : ");
    gets(str1);
    gets(str2);
    char *ptr1 , *ptr2 ; 
    ptr2 = str2 ; 
    ptr1 = str1 ; 

    while(*ptr1 == *ptr2){
     if (*ptr1 == '\0' || *ptr2 == '\0')
         break;
        ptr1++;
        ptr2++;
    }
      if( *ptr1 == '\0' && *ptr2 == '\0'){
        printf("\nBoth Strings Are Equal.");
      }
    else{
        printf("\nBoth Strings Are Not Equal.");
    }
        


return 0 ; 
}