// map is used to store key value pair dictionary or list
// map is an associative array
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string,int> marksmap; // making map
    marksmap["Aman"]=98;
    marksmap["Ashvai"]=8;
    marksmap["Abhay"]=78;
    marksmap["Alan"]=34;
    marksmap.insert({{"Shiv",45},{"Champ",33}});
map<string,int>::iterator itr;
for ( itr = marksmap.begin(); itr!=marksmap.end(); itr++)
{
    cout<<(*itr).first<<" "<<(*itr).second<<endl;// *itr.first will give key and *itr.second will give value
}

return 0;
}