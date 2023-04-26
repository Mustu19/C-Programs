#include<stdio.h>
#include<string.h>

    int main(){
    FILE *ptr;
    char str;
    ptr = fopen("getdemoc.txt" , "r");
     str = fgetc(ptr);
    while(str!=EOF){
        printf("%c" , str);
        str = fgetc(ptr);
    }

    // putc('c', ptr);
    // // putc('c', ptr);
    // // putc('c', ptr);
    // char str[20];
    // fprintf(ptr , "\nThe number is " , str );
    fclose(ptr);

return 0 ; 
}