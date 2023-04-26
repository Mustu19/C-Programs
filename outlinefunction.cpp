#include<iostream>
using namespace std;

class function{
    public:
    void function1(){
        int a ;
        char name[10];
        cout<<"Enter name and number :"<<endl;
        cin>>name>>a;
    }
};

int main(){
    class function f;
    f.function1();
}