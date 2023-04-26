#include<stdio.h>
#include<string.h>

    int main(){
           int n ,i , temp , factor=1;
           char num[10];
           printf("Enter the number:");
           scanf("%d",&n);

            for(i = 0 ; i <=9 ; i++){
                scanf("%d" , num[i]);
            }
            temp = n;
            while(temp){
                temp = temp / 10; 
                factor = factor * 10;
               // printf("\n%d %d" , temp , factor);

        }
        while(factor > 1){
            factor = factor/10;
            printf("\n%d" , n/factor);
            n = n % factor;
           // printf("\n%d %d" , n , factor);
        }

       
return 0 ; 
}



//    while(n>0)
        //    {
        //        n=n/10;
        //        printf("\n%d",i);
        //        i=n%10;
               
        //    }
