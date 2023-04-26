#include<stdio.h>
#include<string.h>


void even(){
   static int i  = 1 ; 
    int n = 10 ;
    if(i<=n){
        if(i%2==0){
            printf("%d\t" , i);
            even(i++) ; 
        }else{
            even(i++) ; 
        }
    } 

}
    int main(){
        even();
return 0 ; 
}