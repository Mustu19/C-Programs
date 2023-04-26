#include<iostream>
using namespace std;

class demo{
    public :
    int a;
    demo(){
        a = 20;
    }
    demo(int x){
        a=x;
        cout<<"The number is "<<a<<endl;
    }
    demo(int x , int y){
        a = x+y;  
        cout<<"The number is "<<a << endl; 
    }
};
int main(){
    demo d;
    cout<<d.a<<endl;
    demo d1(25);
    demo d2(15,4);
}