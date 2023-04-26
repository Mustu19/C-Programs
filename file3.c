#include <stdio.h>
void main() {
    FILE *ptr;
    char ch;

 //write a character to a file
    ptr = fopen("name.txt", "w");
    fputc('m', ptr);
    fputs("ustafa",ptr);
    fputs("\n", ptr);
    fputs("kapasi", ptr);
    fclose(ptr);

 //read a character from a file
    ptr = fopen("name.txt", "r");
    while((ch = fgetc(ptr)) != EOF) {
        printf("%c", ch);
    }
    fclose(ptr);
}
