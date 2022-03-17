#include<iostream>
using namespace std;
class Base
{

    int data1;// private data cannt be inherited
    protected:
    // Here protected data is made beacuse our private data is not inherit so we made our data protected
    // And protected data is only inherited and it is still protected and not able to access it directly
    int p;
    public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void Base::setdata(void){
    data1=10;
    data2=20;
    p=90;
}
int Base ::getdata1()
{
    return data1+p;
}
int Base ::getdata2()
{
    return data2;
}
class Derived : public Base{
    int data3;
    public:
    void process();
    void display();
};
void Derived ::process(){
    data3=data2*getdata1();
}
void Derived ::display(){
    cout<<"Value of data1 is "<<getdata1()<<endl;
    cout<<"value of data2 is "<<data2<<endl;
    cout<<"value of data3 is "<<data3<<endl;
    cout<<"value of data4 is "<<p<<endl;
}
int main(){
    Derived d;
    d.setdata();
    d.process();
    d.display();
return 0;
}