#include<iostream>
using namespace std;

int main(){
    // for(int i=1;i<=5;i++)
    // {
    //     for(int j=i;j<=5;j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    //      for (int k = 2; k-1<=i ; k++)
    //         {
    //           cout<<" ";
    //         }
    // }
    int count=1;
    // for (int i = 1; i <= 3; i++)
    // {
    //     for (int j = 1; j <=3; j++)
    //     {
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }

    // int count=1;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }


    for (int i = 1; i <= 4; i++)
    {
        int v=i;
        for (int j = 1; j <=i; j++)
        {
            cout<<v<<" ";
            v++;
        }
        cout<<endl;
    }

   
    
    
    
    
return 0;
}