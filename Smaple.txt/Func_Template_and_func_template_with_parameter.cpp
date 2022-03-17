#include <iostream>
#include <string>
using namespace std;
template <class T1, class T2>
// Func template is same as class Template
float Func_avg(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}
// Another example is
template <class T>
void swapp(T &c, T &d)
{
    T temp = c;
    c = d;
    d = temp;
}
int main()
{
    float c = Func_avg<int, float>(45, 2);
    cout << "Average is " << c << endl;
    // Another example
    int e = 3, f = 4;
    swapp(e, f);
    cout << "swap of 3 and 4 is  " << e << " " << f;
    return 0;
}