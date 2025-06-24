#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter no. of elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter k: ";
    cin>>k;
    map<int,int>m;
    bool flag=false;
    for (int i = 0; i <n; i++)
    {
        for (int j =i; j <=k+i; j++)
        {
            if(m.find(arr[j])!=m.end()){
                flag= true;
            }
            m[arr[j]]=j;
        }
        m.clear();
    }
    if(flag){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}