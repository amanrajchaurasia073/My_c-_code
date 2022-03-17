#include<iostream>
using namespace std;
//base class
class Student{
    public:
    int pin=90;
    string name="Aman";
    int roll=23;
    void setvalue(string n,int r,int p){
        name=n;
        roll=r;
        pin=p;
    }
    void get(){
        cout<<"Name of student is "<<name<<endl;
        cout<<"Roll of student is "<<roll<<endl;
        // cout<<"Secret code of student is "<<code<<endl;
    }
};
/* Synatx of Inheritance
 class {{derived class name}}:{{visiblity mode}} {{Base class name}}
{
    class member/methods/etc..
}
*/
/*
Note:
1.Default visibility mode is private
2.Public visibility mode: public member of base class become public member of derived class 
3.Private visibility mode: public member of base class become private member of derived class
4.private members are never inherited 
*/
//Derived class
class Aman : public Student
{
public:
    int code=67;
    void student_detail(int code){
        cout<<"Name of student is "<<name<<endl;
        cout<<"Roll of student is "<<roll<<endl;
        cout<<"Secret code of student is "<<code<<endl;
        cout<<"Secret pin of student is "<<pin<<endl;
    }
};
int main(){
    // Student a,b;
    // a.name="Aman";
    // a.roll=23;
    // cout<<a.roll<<endl;
    // a.get();
    // a.student_detail();
    Aman s,j;
    s.student_detail(786);
return 0;
}