#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    //Function object(Functor): func wraped in a class so that it available like an object
int arr[]={1,3,2,5,4,7,89,78};
sort(arr,arr+5);// arr+5: this could sort upto 5 elements only
sort(arr,arr+5,greater<int>());// this will sort in desending order upto 5 elements
for (int  i = 0; i < 8; i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}
// COMPLETED 