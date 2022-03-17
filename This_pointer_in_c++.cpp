#include<iostream>
using namespace std;
class Base{
int a;
public:
    // And we want to return obj of a class we use {class{Class_name}&}
    Base & setdata(int a){
        this->a=a;
        return *this;
    }
    // void setdata(int a){
    //     // a=a;// This will create problem thats why we use this-> pointer to resovle the problem
    //     this->a=a;// This will run successfully
    // }
    void getdata(){
        cout<<"The value of a is "<<a<<endl;
    }
};
int main(){
    // Base a;
    // a.setdata(22);
    // a.getdata();
    Base a;
    a.setdata(12).getdata();
return 0;
}