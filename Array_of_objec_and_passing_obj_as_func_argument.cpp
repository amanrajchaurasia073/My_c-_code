#include <iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
        void printdata(void)
        {
            cout<<"The sum of complex no is "<<a<<" + "<<b<<"i"<<endl;
        }
        void fixdata(int v1,int v2);
        void sumup(complex o1,complex o2){
                a=o1.a+o2.a;
                b=o1.b+o2.b;
        }
};
void complex::fixdata(int v1,int v2){
    a=v1;
    b=v2;
}
class Employe
{
    int salary;

public:
    int id;
    void setdata(void);
    void getdata(void)
    {
        cout << "Your id is " << id << endl;
    }
};
void Employe::setdata(void)
{
    salary = 122;
    cin >> id;
}
int main()
{
    // Employe a;
    complex x,y,z;
    Employe fb[1]; //here object is made in the form of array to input large no of entries
    for (int i = 0; i < 1; i++)
    {
        fb[i].setdata();
        fb[i].getdata();
    }
x.fixdata(1,2);
x.printdata();

y.fixdata(3,4);
y.printdata();

z.sumup(x,y);
z.printdata();
    return 0;
}