#include<iostream>
using namespace std;
/*
If we are having two classes and inherit some function from it 
and both the func present in respected class is of same name
then we have to resolve ambiguity from it so that correct func ia executed
*/
class base1{
public:
    void greet(){
        cout<<"How are you ?"<<endl;
    }
};
class base2{
    public:
    void greet(){
        cout<<"Kaisa hai re ? tu "<<endl;
    }
};
class Derived :public base1,public base2
{
int a;
    public:
    // Ambiguity removing technique is below
    void greet(){
        base1::greet(); // to remove ambiguity which class func you want to call via Derived class object
    }
};
int main(){
    Derived a;
    a.greet();

return 0;
}