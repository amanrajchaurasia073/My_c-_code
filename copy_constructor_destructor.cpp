#include<iostream>
using namespace std;
class Number
{
    int a,b;
    public:
    Number(){}// Making of default mandatory
    Number(int num1){
        a=num1;
        cout<<"Single argument constructor called here "<<endl;
    }
    // when there is no copy condtructor found compiler supplies its own copy constructor 
    Number(Number &obj){
        a=obj.a;
        cout<<"Copy constructor called here "<<endl;
    }
    // syntax for destructor and it does not take any return type and used to destroy unwanted constructor acquiring space
    ~Number()
    {
        cout<<"Destructor is called here "<<endl;
    }
    // Number(int num1,int num2){
    //     a=num1;
    //     b=num2;
    //     cout<<"Two argument constructor called here "<<endl;
    // }
    void display()
    {
        cout<<"The number is "<<a<<endl;
    }
};
int main(){
    int a;
    cout<<"Enter your number ";
    cin>>a;
    Number x,y(9),n;
    {
        Number c,d;
    }
    // x=Number();
    // x=Number(a);
    // x.display();
    y.display();
    Number y1(x);
    Number z3=x;    // copy constructor invoked
    // y1.display();
return 0;
}