#include<iostream>
using namespace std;
class A{
    int a,b;
    public:
    // Synatx for inline decleration
        A(int i,int j):a(i),b(j){cout<<"The value of a is "<<a<<endl;cout<<"The value of b is "
        <<b<<endl;}
};
int main(){
    A a(2,3);
return 0;
}