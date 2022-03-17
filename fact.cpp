#include <iostream>
using namespace std;
void fact(int n)
{
    if (n == 1 || n == 0)
    {
        cout<<1;
    }
    else
    {
        for (int i = 2; i <=n; i++)
        {
            int c=i*n;
            cout<<c<<endl;
        }
        
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    fact(n);
    return 0;
}
