#include<iostream>
using namespace std;
template <class T>
class Aman{
    public:
    T a;
    Aman(int c){
        a=c;
    }
    void Dispaly();
};
template <class T>
void Aman<T>::Dispaly(){
    cout<<"Running Aman Display func "<<a<<endl;
}
template <class T>
void func(T hi){
    cout<<"I am printing templetised func "<<hi<<endl;
}
void func(int hi){
    cout<<"I am first fuc "<<hi<<endl;
}
int main(){
    // Aman <int>obj(12);
    // obj.Dispaly();
    func(23);
    // func<char>('a');
return 0;
}