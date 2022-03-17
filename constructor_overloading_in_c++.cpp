#include<iostream>
using namespace std;
class simple
{
    int a,b,c;
    public:
// This is simple constructor or parameterised constructor
    // simple(int d=1,int e=2,int f=5)
    // {
    //     a=d;
    //     b=e;
    //     c=f;
    // }
// This is default constructor
    //  simple(int d,int f=9)
    // {
    //     a=d;
    //     b=0;
    //     c=f;
    // }
     simple(int d,int e=2,int f=9)
     {
         a=d;
         b=e;
         c=0;//here c is set to zero
     }
     void printdata()
     {
         cout<<"The sum is "<<(a+b+c)<<endl;
     }
};
int main(){
    simple c1(12);
    c1.printdata();

    simple c2(1,5,7);
    c2.printdata();

    // simple c3(1,2);
    // c3.printdata();
return 0;
}