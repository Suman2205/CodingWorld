#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={1,2,3,4};
    int n=v.size();
    vector<int>prefix;
    prefix=v;
    prefix[0]=1;
    for (int i = 1; i <n; i++)
    {
        prefix[i]=v[i-1]*prefix[i-1];
    }
    for (int i = 0; i <prefix.size(); i++)
    {
        cout<<prefix[i]<<" ";
    }
    vector<int>suffix;
    suffix=v;
    suffix[v.size()-1]=1;
    for (int i =v.size()-2; i>=0; i--)
    {
        suffix[i]=v[i+1]*suffix[i+1];
    }
    cout<<endl;
    for (int i = 0; i <suffix.size(); i++)
    {
        cout<<suffix[i]<<" ";
    } 
    vector<int>ans(n);
    for (int i = 0; i <v.size(); i++)
    {
        ans[i]=prefix[i]*suffix[i];
        if (ans[i]>2147483647)
        {
            ans[i]=2147483647;
        }
        if(ans[i]<-2147483647){
            ans[i]=-2147483647;
        }
    }
    cout<<endl;
    for (int i = 0; i <v.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}