#include<iostream>
//  THIS IS AWWSOME STL 
// Explore member func and tell about it 
#include<vector>
using namespace std;
// {cpp vector} method search on google

// void display(vector<int>&v){
//     // where v.size return size of vector
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<" "<<endl;
//         // cout<<v.at(i)<<" "<<endl;
//     }
//     // cout<<endl;// used to display in use new line
    
// }

template<class T>
void display(vector<T>&v){
    cout<<"displaying vector"<<endl;
    // where v.size return size of vector
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" "<<endl;
        // cout<<v.at(i)<<" "<<endl;
    }
    // cout<<endl;// used to display in use new line
    
}
int main(){
    vector <int> vec1;// zero length integer vector
    vector <char> vec2(4);// 4 element character vector
    vector <char> vec3(vec2);// 4 element character vector form vec2
    vector <int> v(6,3);// 6 element character vector of 3s
    int element,size,size1;
    // cout<<"Enter size of your vector "<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter an element to add to this vector ";
    //     cin>>element;
    //     vec1.push_back(element); // where push_back() method is search from google and implemented it
    // }
    // vec1.pop_back();// this will remove one last element from vector
    display(v);
    cout<<vec3.size()<<endl; // this will return size of vec3
    vector <int>:: iterator iter = vec1.begin(); // this will point the first element of vec1 and 
    //this is the method of making iterator
    
    // vec1.insert(iter,566);// this will insert the element in the begning
    // vec1.insert(iter+1,56);// this will insert the element in the iter+1 position

    vec1.insert(iter+1,5,564);// this will insert the element in the (5 and more) copy  of 56 in vec1 
    display(vec1);
return 0;
}