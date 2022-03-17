#include<iostream>
using namespace std;
inline int fact(int n)
{
    if(n==1||n==0)
    {
        return 1;
    }
return n*fact(n-1);
}
int fabi(int );
int main(){
    int a;
    cin>>a;
    cout<<fact(a)<<endl;
    cout<<fabi(a)<<endl;
return 0;
}
int fabi(int n)
{
if (n<2)
{
    return n;
}
return fabi(n-1)+fabi(n-2);
}