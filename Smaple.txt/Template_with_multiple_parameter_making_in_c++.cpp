#include<iostream>
using namespace std;
// class template with multiple parameter 
// synatx
// template <class T1, class T2,class T3,..>
// Default Template with Default Parameter
template <class T1=int,class T2=float> // This is default template parameter
// template <class T1,class T2>
class Detail{
    public:
    T1 data1;
    T2 data2;
    Detail(T1 c,T2 d){
        data1 =c;
        data2=d;
    }
    void Display()
    {
        cout<<this->data1<<endl<<this->data2<<endl;
    }

};
int main(){
    Detail <string,int> obj("Aman",23);
    Detail <float,int> obj1(12.4534,24);
    cout<<endl;
    Detail < > obj2(45,45.56);// Default template parameter
    obj.Display();
    obj2.Display();
    obj1.Display();
return 0;
}