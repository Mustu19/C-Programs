#include<stdio.h>
#include<string.h>

struct vector{
    int a , b;
};
struct vector multiply(struct vector a , struct vector b)
{
    struct vector result;
    result = a*b;
    return result;
}
    int main(){
    struct vector mul , multi;
    a.mul = 21; 
    b.mul = 12;

    multi = multiply(a ,b);

    printf("the multiplication of both the given numbers is %d" , multi);
return 0 ; 
}