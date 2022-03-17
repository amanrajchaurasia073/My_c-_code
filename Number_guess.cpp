#include<iostream>
using namespace std;
int num_guess(int n)
{
 int a=2*n;int b=a+6;int c=b/2;
   cout<<c<<endl;
   return 0;
}
int num_guess1(int n)
{
 int c=(n*2+6)/2;
   cout<<c<<endl;return 0;
}
int main()
{int a;
cout<<"Hello world"<<endl;
    cin>>a;
    // cout<<a;
int b=num_guess(a);
int c=num_guess1(a);
// cout<<b;
// cout<<c;
return 0;
}
