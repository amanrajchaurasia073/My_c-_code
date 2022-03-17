#include<iostream>
// correct code
using namespace std;
class frnd
{
 int a,b;
 public:
    friend void add(frnd ,frnd );
    void set(int v1,int v2){
        a=v1;
        b=v2;
    }
    void prnt(){
        cout<<a<<b<<endl;
    }
};
void add(frnd c,frnd d){
    cout<<(c.a+d.b);
}
int main(){
   frnd f;
   f.set(1,3);
   add(f,f);
return 0;
}

// Another example on friend function
// #include<iostream>
// using namespace std;
// class Y;// This is forward decleration
// class X
// {
//     int data;
//     public:
//     void setvalue(int value){
//         data=value;
//     }
//     friend void add(X,Y);
// };
    
// class Y
// {
//     int num;
//     public:
//     void setvalue(int value){
//         num=value;
//     }
//     friend void add(X,Y);

// };
// void add(X o1,Y o2){
//     cout<<"The sum is "<<(o1.data+o2.num)<<endl;
// }
// int main(){
//     X i;
//     i.setvalue(5);
//     Y j;
//     j.setvalue(1);
//     add(i,j);
// return 0;
// }
