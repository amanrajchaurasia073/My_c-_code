// #include<iostream>
// using namespace std;
// class sub;
// class calculator
// {
// private:
//     int a,b;    
// public:
//    void setdata(){
//        cin>>a>>b;
//        cout<<"The entered value of a and b is "<<a<<" and "<<b<<endl;
//    }
//    friend int sub::sb(sub ,sub );
// // above line is used to make a funct of other class as a friend
// // to make entire class as a friend 
// friend class sub;
// };
// class sub
// {
//     public:
//     int sb(calculator a,calculator b){
//         return (b-a);
//     }
// };
// int main(){
//     sub s;
//     int u,v;
//     calculator c;
//     c.setdata();
    
//     int z=s.sb(c);
//     cout<<z<<endl;
// return 0;
// }
#include<iostream>
using namespace std;
class A
{
    int a=3;
    int b=4;
    public:
    void friend add(A,A);// here pass the arrgument as a calss name 
    void set(){
         cout<<"value of a is "<<a<<" and the value of b is "<<b<<endl;
    }
};
void add(A u,A v)
{
    cout<<"sum "<<(u.a+v.b);
}
int main(){
    A a;
    a.set();
    add(a,a);//pass the same obj two time if two arrguments required
return 0;
}