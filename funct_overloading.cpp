#include<iostream>
using namespace std;
int volume(int a)
{ 
    cout<<"Volume of cube is "<<endl;
    return (a*a*a);
}
int volume(int l,int b,int h)
{ 
    cout<<"Volume of cuboid is "<<endl;
    return (l*b*h);
}
int main(){
    cout<<volume(2)<<endl;
    cout<<volume(1,2,3)<<endl;
return 0;
}