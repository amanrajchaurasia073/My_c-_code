#include<iostream>
using namespace std;
// And this is example of RUN TIME POLYMORPHISM
class Base{
public:
    int base_data=1;
    // virtual func is declared below and with this func we can run those func other than base class ,
    // and no default func run.
    virtual void getdata(){
        cout<<"1 Displaying base_data of base class "<<base_data<<endl;
    }
};
class Derived:public Base{
    public:
    int derived_data=2;
    void getdata(){
        cout<<"2 Displaying derived_data of derived class "<<derived_data<<endl;
        cout<<"2 Displaying base_data of derived class "<<base_data<<endl;
    }
    };
int main(){
    Base *b;
    Derived obj;
    b=&obj;
    b->getdata();
return 0;
}
/*
rules for virtua func
1.they cannt be static
2.they are accessed by obj pointer
3.virtual class can be a friend of another class
4. A virtual function in base class might not be used 
5.A virtual func is defined in a base class,there is no necessity of redefining it in the derived class 
*/