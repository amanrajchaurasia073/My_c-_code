#include<iostream>
using namespace std;
// Decleration of template class 
template <class T>

// we will replace all the data type with custom data type(T) and repalce the data type with variable data type
class Vector{
   
    public:
     T *arr;
    int size;
        Vector(int m){
            size=m;
            arr =new T[size];
        }
        T dot_product(Vector &v){
            T d=0;
            for (int i = 0; i < size; i++)
            {
                d+= this->arr[i]* v.arr[i];
                
            }
            return d;
        }
};
// class Vector{
   
//     public:
//      int *arr;
//     int size;
//         Vector(int m){
//             size=m;
//             arr =new int[size];
//         }
//         int dot_product(Vector &v){
//             int d=0;
//             for (int i = 0; i < size; i++)
//             {
//                 d+= this->arr[i]* v.arr[i];
                
//             }
//             return d;
//         }
// };
int main(){
    // Vector v(3);
    // v.arr[0]=12;
    // v.arr[1]=32;
    // v.arr[2]=1;
    // Vector v1(3);
    // v1.arr[0]=14;
    // v1.arr[1]=34;
    // v1.arr[2]=9;
    // int a=v.dot_product(v1);
    // cout<<a<<endl;

    // Vector <float> v(3);
    // v.arr[0]=1.72;
    // v.arr[1]=3.72;
    // v.arr[2]=1.7;
    // Vector <float> v1(3);
    // v1.arr[0]=1.74;
    // v1.arr[1]=3.74;
    // v1.arr[2]=9.7;
    // int a=v.dot_product(v1);
    // cout<<a<<endl;

    Vector <double> v(3);
    v.arr[0]=1.72;
    v.arr[1]=3.72;
    v.arr[2]=1.7;
    Vector <double> v1(3);
    v1.arr[0]=1.74;
    v1.arr[1]=3.74;
    v1.arr[2]=9.7;
    int a1=v.dot_product(v1);
    cout<<a1<<endl;
return 0;
}