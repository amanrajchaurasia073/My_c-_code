#include<iostream>
using namespace std;
class Base{
int Id;float price;
public:
    void setdata(int i,float j){
        Id=i;
        price=j;
    }
    void getdata(){
        cout<<"Enter id is "<<Id<<endl;
        cout<<"Enter price is "<<price<<endl;
    }
};
int main(){
    int size=3,p;
    float q;
    Base *ptr= new Base[size];
    Base *temptr= ptr;
    for (int i = 0; i <size ; i++)
    {
        cout<<"Enter your Id and price for item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<"Id number "<<i+1<<endl;
        temptr->getdata();
        temptr++;
    }
    
return 0;
}