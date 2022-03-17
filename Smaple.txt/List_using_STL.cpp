#include<iostream>
#include<list>
// it is bidirectional
// using to store data 
using namespace std;
void display(list<int> &lst){
    list<int>:: iterator it;
    for ( it=lst.begin(); it!=lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    
}
int main(){
    list <int> list1;// empty list of length 0
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(6);
    list1.push_back(9);
    list1.push_back(8);

    // making iterator
    list<int> :: iterator iter1;
    iter1=list1.begin();// it will point first element of list1
    cout<<*iter1<<" ";// this will print first element value
    iter1++;
    // with this we can acess elements or using display method 
    display(list1);
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    list <int> list2(7);// empty list of length 7
    list <int>:: iterator iter;
    iter =list2.begin();
    *iter=12;
    iter++;
    *iter=23;
    iter++;
    *iter=34;
    iter++;
    *iter=45;
    iter++;
    *iter=56;
    iter++;
    *iter=67;
    iter++;
    *iter=89;
    iter++;
    display(list2);
    // deleting element from list 
    // list2.pop_front();// this line will take one element out from list2 from front
    // list2.pop_back();
    // list2.remove(12);
    display(list2); // this line will take out one element from list2
    // sorting the list 
    list2.sort();
    display(list2);
    // merging two list
    list1.merge(list2);
    cout<<"list1 after merging ";
    display(list1);
    // reversing the list
    list1.reverse();
    cout<<"Reversing the list1 ";
    display(list1);
return 0;
}
// task : batana hai ki ek func kaise kam krta hai