#include<iostream>
#include<cmath>
using namespace std;
class Simple_calculator{
public:
    int a,b;
    void input_number1(){
        cout<<"Enter first no. "<<endl;
        cin>>a;
        cout<<"Enter second no. "<<endl;
        cin>>b;
    }
    void operation1(){
        cout<<"The sum is "<<(a+b)<<endl;
        cout<<"The sub is "<<(a-b)<<endl;
        cout<<"The mult is "<<(a*b)<<endl;
        cout<<"The div is "<<(a/b)<<endl;
    }
};
class Sci{
    public:
    int c,d;
    void input_number2(){
        cout<<"Enter first no. of sci "<<endl;
        cin>>c;
        cout<<"Enter second no. sci "<<endl;
        cin>>d;
    }
    void operation2(){
        cout<<"The sin(c) is "<<sin(c)<<endl;
        cout<<"The cos(d) is "<<cos(d)<<endl;
        cout<<"The tan(c*d) is "<<tan(c*d)<<endl;
        cout<<"The tan(d) is "<<tan(d)<<endl;
    }

};
class Hybrid :virtual public Simple_calculator,virtual public Sci{
    public:
        void result(){
            input_number1();
            cout<<"All the operaton perform by Simple calculator are "<<endl;
            operation1();
            input_number2();
            cout<<"All the operaton perform by Scientific calculator are "<<endl; 
            operation1();
            operation2();
        }
};
int main(){
    Hybrid h;
    h.result();
return 0;
}