// #include<iostream>
// #include<string>
// using namespace std;
// class bin
// {
//     string s;
    
//     public:
//         void binn(void);
//         void check(void);
//         void read(void){
//             cin>>s;
//         }
//         // void display(void);
// };
// void bin::check(void)
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if(s.at(i)!='0'&&s.at(i)!='1')
//         {
//             cout<<"incorrect"<<endl;
//             exit(0);
//         }
//     }
    
// }
// void bin::binn(void)
// {
//     check();
//     for (int i = 0; i < s.length(); i++)
//     {
//         cout<<s.at(i);
//     }
//     cout<<endl;
    
// }
// int main(){
//    bin a;
// //    a.read();
//    a.binn(); 
// return 0;
// }
#include<iostream>
#include<string>
using namespace std;
class word
{
string s;
public :
    void read(void);
    void dispaly(void)
    {
        cout<<"Dispalying the content of diasplay"<<endl;
      cout<<s<<endl;   
    }
};
void word ::read(void){
 cin>>s;
//  cout<<s<<endl;
}
int main(){
    word a;
    a.read();
    a.dispaly();
return 0;
}