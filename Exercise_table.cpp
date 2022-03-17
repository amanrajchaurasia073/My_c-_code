#include<iostream>
using namespace std;
int table1(int n)
{
    for (int i = 1; i <=10; i++)
    {
        int t=n*i;
        cout<<t<<endl;
    }
   return 0; 
}
int main(){
    int n;
    cin>>n;
    int t=table1(n);
return 0;
}