#include<stdio.h>
#include<string.h>
struct student{
    int m1 , m2 ;
    char name[15] ;
};
int scholar(struct student s){
    float avg;
    printf("\nEnter marks of 2 subjects:");
    scanf("%d %d" , &s.m1 , &s.m2);
    avg = (s.m1 + s.m2) / 2 ;
    if(avg > 90){
        return 1 ;
    }
    else{
        return 0 ;
    }
    return 0 ;
}
    int main(){
    struct student s;
    int ans ;
    ans = scholar(s);
    if(ans == 1){
        printf("\n\nEligible for Scholarship..");
    }
    else{
        printf("\n\nNot Eligible for Scholarship..");
    }
return 0 ; 
}
