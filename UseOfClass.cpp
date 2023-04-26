#include<iostream>
using namespace std;

class maths{
    public:
    int a , b;
    char name[20];
    void addition(){
        cout<<"Enter ur name : " << endl;
        cin>>name>>a>>b;
        cout<<"The name is "<< name<< endl;
        cout<<"The addition of 2 numbers is "<< a+b << endl;
    }

};
int main(){
    class maths m;
    m.addition();
}