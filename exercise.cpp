#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{int cp,sp;
    cin>>sp>>cp;
  int  a=sp-cp;
    if (a>=0){
cout<<"Profit"<<a;
    }
    else if (a<0)
    {
      cout<<"Loss"<<a;  
    }
    return 0;
}

