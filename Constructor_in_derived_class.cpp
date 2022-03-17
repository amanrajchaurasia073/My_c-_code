#include<iostream>
using namespace std;
class Base1{
    int a;
    public:
    Base1(){
        cout<<"Base1 constructor is called "<<endl;
    }
};
class Base2{
    int b;
    public:
    Base2(){
        cout<<"Base2 constructor is called "<<endl;
    }
};
class Derived:public Base1, public Base2{
    int c;
    public:
    // void Base(){
    //     Base1::Base();
    // }
    Derived(){
        cout<<"Derived class constructor is called "<<endl;
    }
};
int main(){
  Derived a;
//   a.Base();  
return 0;
}