#include<iostream>
using namespace std;
class Simple{
    int a,b;
    public:
    void setdata(int i,int j){
        a=i;
        b=j;
    }
    void getdata(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }
};
int main(){
    Simple *ptr = new Simple[2];// making two new array of bject
    // ptr->setdata(1,2);// ptr-> denotes derefrencing 
    (*ptr).setdata(2,4);
    (ptr)->getdata();
return 0;
}