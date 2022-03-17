#include<iostream>
using namespace std;

int main(){
    int a=4;
    int *b=&a;
    cout<<"This line will print the value of a"<<*b<<endl;
    cout<<"The address of a is : "<<b<<endl;
    // derefrencing 
    int **c=&b;
    cout<<"The address of b is : "<<*c<<endl;
    cout<<"The value of b is : "<<**c<<endl;
return 0;
}