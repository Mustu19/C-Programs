#include<iostream>
using namespace std;

class demo{
    private :
    int a, b;
    char name[25];
    friend void function();
} ;

void function(){
    class demo d;
    cin>>d.a>>d.b;
    cout<<"The values are "<<d.a<<" and "<<d.b<<endl;
}
int main(){
        function();
}