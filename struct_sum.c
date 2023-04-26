#include<stdio.h>
#include<string.h>

struct vector{
    int x , y;
};

struct vector sumVector(struct vector v1 , struct vector v2){
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;

    return result;

}
    int main(){
        struct vector v1,v2 , sum;
        v1.x = 34;
        v1.y = 54;

        v2.x = 56;
        v2.y = 67;

        printf("\nX dim is %d and Y dim is %d" , v1.x , v1.y);
        printf("\nX dim is %d and Y dim is %d" , v2.x , v2.y);

        sum = sumVector(v1 , v2);

        printf("\n\nX dim of result is %d and Y dim is %d" , sum.x , sum.y);
return 0 ; 
} 