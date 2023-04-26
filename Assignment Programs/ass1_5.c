#include<stdio.h>
#include<string.h>

    int main(){
    int d , m  , yr  , n , n1=0 ;
    printf("Enter DD/MM/YYYY : ");
    scanf("%d %d %d" , &d , &m , &yr);

    if(d>=1 && d<=31 && m>=1 && m<=12 && yr>0){
        if(yr%4==0){
        if(yr%100==0){
            if(yr%400==0){
                n = 1 ; 
            }
            else{
                n = 0 ;
            }
        }
        else{
            n = 1 ;
        }
    }else{
        n = 0 ; 
    }

        if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12 ){
            if(d>=1 && d<=31){
                n1 = 1 ; 
            }
            else{
                n1 = 0 ; 
            }
        }else if (m==2 && n == 1){
            if(d>=1 && d<=29){
                n1 = 1 ; 
            }else{
                n1 = 0 ; 
            }
        }
        else if (m==2 && n == 0){
            if(d>=1 && d<=28){
                n1 = 1 ; 
            }else{
                n1 = 0 ; 
            }
        }
        else{
            if(d>=1 && d<=30){
                n1 = 1 ; 
            }
            else{
                n1 = 0 ; 
            }
        }
}
if(n1 == 1){
    printf("Date is valid.");
}
else{
    printf("Date is invalid.");
}
return 0 ; 
}