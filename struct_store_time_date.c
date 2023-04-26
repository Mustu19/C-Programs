#include<stdio.h>
#include<string.h>

typedef struct date{
    int day , month , year;
}date;

typedef struct time{
    int hour , minute , second;
}time;

void display(date d , time t)
{
    printf("The date is : %d/%d/%d and time is : %d:%d:%d" , d.day , d.month , d.year ,t.hour , t.minute , t.second);
}
   int main(){
    date d = {12 , 12 , 22};
    time t = {12 , 24 ,45};
    display(d , t);
   // display(t);



return 0 ; 
}