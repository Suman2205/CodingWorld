#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i <n; i++)
    {
        cin>>v[i];
    }
    map<int,int>m;
    for (int i = 0; i <n; i++)
    {
        m[v[i]]++;       
    }
    /* []
      m[1,1]
      m[1]++
      m[1,2]
    */
   int sum=0;
   for (auto element: m)
   {
        if (element.second>1)
        {
            sum+=element.first;
        }  
   }
   cout<<"Sum of repititive elements is "<<sum<<endl;
   return 0;
}