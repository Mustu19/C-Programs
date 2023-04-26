// C program to illustrate
// fgets()
#include <stdio.h>
#include<stdlib.h>
#define MAX 25
int main()
{
	FILE *ptr;
    char arr[MAX];

    ptr = fopen("test.txt", "r");
	if (ptr == NULL) {
		printf("File can't be opened \n");
		exit(0);
	}
       
	if(fgets(arr, MAX, ptr)!=NULL){
        puts(arr);
    }
    fclose(ptr);
	return 0;
}
