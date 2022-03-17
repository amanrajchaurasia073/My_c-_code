#include<iostream>
using namespace std;
class party
{   string cd[10];
    int j;
    public:
    string name[10];
    void in(void)
    {
        cout<<j<<endl;
        cin>>name[j];
        cin>>cd[j];
        j++;
    }
    void dis(void)
    {
        for (int i = 0; i < j; i++)
        {
            cout<<" Hello "<<name[i]<<" your secect code is "<<cd[i]<<endl;
        }
        
    }
};
int main(){
    cout<<"Hello world"<<endl;
    party p,k,l;
    p.in();p.dis();
    k.in();k.dis();
    l.in();l.dis();
return 0;
}