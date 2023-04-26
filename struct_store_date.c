#include<stdio.h>
#include<string.h>

typedef struct date{
    int date , month , year;
}date;

void display(date d){
    printf("\n\nThe date is %d/%d/%d" , d.date, d.month , d.year);
}

int dateCmp(date d1, date d2)
{
    if(d1.year > d2.year){
        return 1;
    }
     if(d1.year < d2.year){
        return -1;
    }
    return 0;
}
    int main(){
    
    date d1 = {1 ,1 ,20};
    date d2 = {3 ,3, 21};

    display(d1);
    display(d2);

    int a = dateCmp(d1 , d2);

    printf("\n\nThe date Comparison date is %d" , a);
return 0 ; 
}




