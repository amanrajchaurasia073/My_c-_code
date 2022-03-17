#include<iostream>
using namespace std;
/* synatx for multiple inheritance 
 class Derived : visiblity-mode base1, visibility-mode base2
 {
     class body
};
*/
class base1{
protected:
int data1;
public:
    void set1(int a){
        data1=a;
    }
};
class base2{
protected:
int data2;
    public:
    void set2(int b){
        data2=b;
    }
};
class base3{
protected:
int data3;
    public:
    void set3(int c){
        data3=c;
    }
};
// we can add more base classes here
class Derived:public base1,public base2,public base3{
    public:
        void show(){
        cout<<"The value data1 is "<<data1<<endl;
        cout<<"The value data2 is "<<data2<<endl;
        cout<<"The value data3 is "<<data3<<endl;
        cout<<"The sum is "<<(data1+data2+data3)<<endl;
        }
};
int main(){
  Derived a;
 a.set1(12);
 a.set2(24);
 a.set3(90);
a.show();
return 0;
}