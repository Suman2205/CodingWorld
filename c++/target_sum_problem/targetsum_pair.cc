#include<iostream>

#include<vector>

using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elements:",cin>>n;
    vector<int>v={2,3,4,5,6};
    int x=5;
    int pair=0;
    for (int i = 0; i <n; i++)
    {
        for (int j = i+1; j <n; j++)
        {
            if (v[i]+v[j]==x)
            {
                cout<<"The pair is "<<v[i]<<" , "<<v[j]<<endl;
                pair++;
            }
            
        }
        
    }
    
    cout<<"No. of pairs whose sum is equal to given target are "<<pair;
    return 0;
}