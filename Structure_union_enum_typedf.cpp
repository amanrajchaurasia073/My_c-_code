#include<iostream>
using namespace std;
struct car
{
    int model;
    char type;
    float price;
};
union Sports
{
    int cricket;
    char chess;
    float boxing;
};

int main(){
     struct car Maruti;
    // kar Farrari;

    Maruti.model=800;
    // Farrari.model=800;
    Maruti.type='a';
    Maruti.price=12000.678; 
    cout<<Maruti.model<<endl;
    // cout<<Farrari.model<<endl;
    cout<<Maruti.type<<endl;
    cout<<Maruti.price<<endl;
    // union 
    union Sports m;
    m.chess='y';
    cout<<m.chess<<endl;
    // enum
    enum Cricket{batting,bolling,fielding};
    cout<<(batting==0)<<endl;
    cout<<batting<<endl;
return 0;
}