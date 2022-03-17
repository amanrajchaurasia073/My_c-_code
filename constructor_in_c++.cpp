#include<iostream>
using namespace std;
class A
{
    int a;
    int b;
    public:
     A(void);//decleration of constructor 
    // and it can have default argument
    //we cant refer to their address
    //and its name is same as class name and it does not have any 
    // return and It is a default constructor
    // and it should be declared inside the public section of the class 
    // and whatever written inside constructor it will run it too.
    //It is a special member function of the class 
    //It is used to initialize the obj of the class and it is automatically invoked
    // whenever an obj is created

    void printdata(){
         cout<<"value of a is "<<a<<" and the value of b is "<<b<<endl;
    }
};
A::A(void)
{
a=10;
b=30;
cout<<"Im inside constructor"<<endl;
}
int main(){
    A a;
    a.printdata();
return 0;
}