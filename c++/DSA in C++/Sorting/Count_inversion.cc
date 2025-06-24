#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int merge(int arr[],int st,int mid,int end){
    vector<int>temp;
    int i=st;
    int j=mid+1;
    int inv=0;
    while(i<=mid&&j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
            inv+=(mid-i+1);
        }
    }
    while (i<=mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int idx=0;idx<temp.size();idx++){
        arr[st+idx]=temp[idx];
    }
    return inv;
}
int mergeCountInversion(int arr[],int st,int end){
    if(st<end){
        int mid=st+(end-st)/2;
        int left=mergeCountInversion(arr,st,mid);
        int right=mergeCountInversion(arr,mid+1,end);
        int self=merge(arr,st,mid,end);
        return left+right+self;
    }
    return 0;
}
int main(){
    // int arr[]={6,3,5,2,7};
    int arr[]={1,3,5,10,2,6,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"No. of count inversion: "<<mergeCountInversion(arr,0,n-1);
    return 0;
}