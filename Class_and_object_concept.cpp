// #include<iostream>
// using namespace std;
// class num
// {
// private:
//     int a,b,c;
// public:
//     int d,e;
//     void set(int a1,int b1,int c1);
//     void get(int d,int e){
//         cout<<a<<endl;
//         cout<<b<<endl;
//         cout<<c<<endl;
//         cout<<d<<endl;
//         cout<<e<<endl;
//     }
// };
// void num ::set(int a1,int b1,int c1)
// {
//     a=a1;
//     b=b1;
//     c=c1;
// }
// int main(){
//     num b;
//     b.set(1,2,3);
//     b.get(4,5);
    
// return 0;
// }
#include<iostream>
using namespace std;
class Atm
{
// defalut it takes private
int cvv,pin;
public:
   string cn,expyr;
   void prvt(int c,int p);
   void user()
   {
       cout<<cn<<endl;
       cout<<expyr<<endl;
       cout<<cvv<<endl;
       cout<<pin<<endl;
   }
};

void Atm::prvt(int c,int p){
    user();//this is called nested functions in class
cvv=c;
pin=p;
}

int main(){
    Atm b;
    b.cn="AMAN RAJ";
    b.expyr="2023";
    b.prvt(681,7800);
    // b.user();
return 0;
}