#include <iostream>
using namespace std;
// Abstract base class is the class which contain at lest one virtual func
class Base{
    protected:
    string name;
    int id;
    public:
        Base(string n,int i){
            name=n;
            id=i;
        }
    // virtual void dispaly(){} // this is virtual func
    virtual void display()=0;// this is pure virtual func or do nothing func 
};
class Derived:public Base{
    int code;
    public:
    Derived(string s,int di,int c):Base(s,di){
        code=c;
    }
    void display(){
        cout<<"Name is "<<name<<endl;
        cout<<"id is "<<id<<endl;
        cout<<"code is "<<code<<endl;
    }
};
int main()
{
    Base *a[2];// creating two pointer object of class base
    Derived d("Aman",43,1234);
    a[0]=&d;
    a[0]->display();
    return 0;
}