#include<iostream>
using namespace std;

class var1{
    public :
    int a;
};
void function1(){
    class var1 one;
    cout<<"Enter first number : "<<endl;
    cin>>one.a;
}

class var2{
    public :
    int b;
};
void function2(){
    class var2 two;
    cout<<"Enter second number :" <<endl;
    cin>>two.b;
}

void function3(){
    function1();
    function2();
}
int main(){
    function3();
    // one.a = one.a + two.b;
    // two.b = one.a - two.b;
    // one.a = one.a - two.b;
    //cout<<"The numbers are "<<one.a<<" and "<<two.b;
}