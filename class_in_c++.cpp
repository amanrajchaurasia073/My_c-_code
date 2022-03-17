#include<iostream>
using namespace std;
class Employee
{
private:
    int pass_code,no_of_gf;
public:
    string name,hostle_name;
    void secret(int p,int g);
    void detail(void)
    {
    cout<<name<<endl;
    cout<<hostle_name<<endl;
    cout<<pass_code<<endl;
    cout<<no_of_gf<<endl;
}
};
void Employee ::secret(int p,int g) 
{
    pass_code=p;
    no_of_gf=g;
}
int main(){
    Employee obj;
    obj.hostle_name="Maharaj";
    obj.name="raj";
    obj.secret(120400,10);
    obj.detail();
return 0;
}