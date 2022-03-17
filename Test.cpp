#include<iostream>
using namespace std;
int getMinDiff(int arr[], int n, int k) {
        int sum,dif,res;
        for(int i=0;i<=n-1;i++)
        {
            sum=arr[i]+k;
            dif=arr[i]-k;    
            if (sum>0)      
            {
                if (sum<dif)
                {
                    cout<<" "<<sum;
                }
                
            }
            else if (dif>0)      
            {
                if (dif<sum)
                {
                    cout<<" "<<dif;
                }
                
            }
                
            // if(sum>0 && sum<dif){
            //     cout<<" "<<sum<<endl;
            // }
            // else if(dif>0&&dif<sum){
            //     cout<<" "<<dif<<endl;
            // }
            // cout<<" "<<sum;
            // cout<<" "<<dif;
        }
                
    return 0;
    };
int main(){
    int r[]={1,5,8,10};
    int k=2;
    int len=(sizeof(r)/sizeof(r[0]));
    // cout<<len<<endl;
    getMinDiff(r,len,k);
    
return 0;
}