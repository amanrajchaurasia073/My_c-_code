#include<iostream>
using namespace std;

int main(){
    int a=90;
    int* ptr=&a;
    cout<<"The value of a is "<<*(ptr)<<endl;// *() this is called derefrencing 
    // int* name = new data_type(value);
    int* p = new int(50);
    delete p;
    cout<<"The value at address p is "<<*(p)<<endl;
    int* arr=new int[3];
    arr[0]=10;
    *(arr+1)=20;
    arr[2]=30;
     delete[] arr;// delete key word is used to free up the space acquired by the pointer
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
   
return 0;
}