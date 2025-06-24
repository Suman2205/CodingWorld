#include<iostream>
#include<vector>
using namespace std;
void zerosort(vector<int>&v){
    int n=v.size();
    for (int i = 0; i<n; i++)
    { 
        bool flag=false;
        for (int j = 0; j<n-i-1; j++)
        {
            if (v[j]==0&&v[j+1]!=0)
            {
                swap(v[j],v[j+1]);
                flag=true;
            }
        }
        if(!flag) break;
    }
    return;
}
// void zerosort(vector<int>&v){
//     int n=v.size();
//     for (int i =n-1; i>=0; i--)
//     {
//         int j=0;
//         bool flag=false;
//         while (j!=i)
//         {
//             if (v[j]==0&v[j+1]!=0)
//             {
//                 swap(v[j],v[j+1]);
//                 flag=true;
//             }
//             j++;
//         }
//         if (!flag)break;
//     }
//     return;
// }
int main(){
    int n;
    cout<<"Enter no. of elements: ",cin>>n;
    vector<int>v(n);
    for (int i = 0; i<v.size(); i++)
    {
        cout<<"Enter "<<i<<"th index element:",cin>>v[i];
    }
    zerosort(v);
    cout<<"The sorted array is:"<<endl;
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}