#include<stdio.h>
#include<string.h>

    int main(){
    FILE *ptr1;
    FILE *ptr2;

    char str;
    ptr1 = fopen("getdemoc.txt" , "r");
    ptr2 = fopen("getdemoc1.txt" , "w");

    str = fgetc(ptr1);
    // while(str!=EOF){
    //     printf("%c" , str);
    //     str = fgetc(ptr1);
    // }
        while(str!=EOF){
        fputc(str , ptr2);
       // fputc(str, ptr2);
         str= fgetc(ptr1);
    }
    fclose(ptr1);
    fclose(ptr2);

return 0 ; 
}