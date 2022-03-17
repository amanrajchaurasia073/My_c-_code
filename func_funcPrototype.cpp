#include <iostream>
using namespace std;
int sum(int, int);
int swap(int, int);

int main()
{
    int a, b;
    int c = 2, d = 3;
    cin >> a;
    cin >> b;
    // cout<<swap(a,b);
    cout << "Sum is " << sum(a, b) << endl;
    swap(a, b);

    return 0;
}
int swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "The swap is " << a << " " << b << endl;
    return 0;
}
// make only those function inline whose code is tends to negligible
inline int sum(int a, int b){
    return a+b;
}