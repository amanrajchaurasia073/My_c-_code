#include <iostream>
using namespace std;
class Emp
{
    int id;
    static int v;

public:
    void setdata(void);
    void getdata(void);
    static void getcount(void){
        cout<<"The value of count is "<<v<<endl;
        // cout<<id;//this will throw error
    }
};
int Emp::v = 0;
void Emp::setdata(void)
{
    cin >> id;
     v++;
}
void Emp::getdata(void)
{
    cout << v << " your id is " << id << endl;
   
}
int main()
{
    Emp i, j, k;
    i.setdata();
    i.getdata();
     Emp::getcount();
    j.setdata();
    j.getdata();
    Emp::getcount();
    k.setdata();
    k.getdata();
    Emp::getcount();
    return 0;
}
