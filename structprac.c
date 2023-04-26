#include<stdio.h>
#include<string.h>

struct vector{
    int x , y;
};
    int main(){
        struct vector v1,v2;
        v1.x = 34;
        v1.y = 54;

        v2.x = 56;
        v2.y = 67;

        printf("\nX dim is %d and Y dim is %d" , v1.x , v1.y);
        printf("\nX dim is %d and Y dim is %d" , v2.x , v2.y);
return 0 ; 
}