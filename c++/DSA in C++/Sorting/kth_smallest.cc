#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int partition(vector<int>&v,int l,int r){
    int i=l;
    for (int j = l; j < r; j++)
    {
        if (v[j]<v[r])
        {
            swap(v[i],v[j]);
            i++;
        }
    }
    swap(v[i],v[r]);
    return i;
}
int kthsmallest(vector<int>&v,int l,int r,int k){
    if (k>0&&k<=r-l+1)
    {
        int pos=partition(v,l,r);
        if (pos-l==k-1)
        {
            return v[pos];
        }
        else if(pos-l>k-1){
            return kthsmallest(v,l,pos-1,k);
        }
        else{
            return kthsmallest(v,pos+1,r,k-(pos-l+1));
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter no. of elements: ",cin>>n;
    vector<int>v(n);
    int k;
    cout<<"Enter value of k: ",cin>>k;
    for (int i = 0; i<n; i++)
    {
        cout<<"Enter "<<i<<"th index element:",cin>>v[i];
    }
    cout<<"Kth smallest element is: "<<kthsmallest(v,0,n-1,k);
    return 0;
}