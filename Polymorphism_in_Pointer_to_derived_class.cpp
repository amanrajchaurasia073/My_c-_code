#include<iostream>
using namespace std;
class Base{
public:
    int base_data;
    void getdata(){
        cout<<"Displaying base_data of base class "<<base_data<<endl;
    }
};
class Derived:public Base{
    public:
    int derived_data;
    void getdata(){
        cout<<"Displaying derived_data of derived class "<<derived_data<<endl;
        cout<<"Displaying base_data of derived class "<<base_data<<endl;
    }
};
int main(){
    Base *b;
    Derived *d,obj;
    b=&obj;// Base class pointer is pointing derived class obj
    // b->obj;// Base class pointer is pointing derived class obj this will throw error
    b->base_data=12;
    b->getdata();
    d->derived_data=90;
    d->base_data=89;
    d->getdata();
return 0;
}