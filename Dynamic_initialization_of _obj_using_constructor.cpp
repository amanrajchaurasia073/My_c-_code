// In this program the constructor which has to run is decided on the input enter by user
// which is allocated on run time
#include<iostream>
using namespace std;
class Percent
{
int indata;
int outdata;
    public:
    Percent(){}
    Percent(int i,int o);
    Percent(int i,int o);
};
void Percent::Percent(int i,int o){
    int res=((i/o)*100);
    cout<<"The percentage in integer is "<<res<<endl;
}
void Percent::Percent(float i,int o){
float res=(float)(i/o);
    cout<<"The percentage in decimal is "<<res<<endl;
}
int main(){
Percent b1,b2;
int input,output;
float in;
cout<<"Enter the in/op "<<endl;
cin>>input>>output;

b1.Percent(input,output);
b2.Percent(in,output);
return 0;
}
// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"Hello world";
// return 0;
// }