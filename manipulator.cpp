#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    int a=45;
    int b=4;
    int c=4500;
    cout<<setw(2)<<a<<endl;
    cout<<setw(2)<<b<<endl;
    cout<<setw(2)<<c<<endl;
    cout<<a<<endl;
    int i=0;
    if (i<=3)
    {
        cout<<i<<endl;
        i++;
    }
    
    return 0;
}
