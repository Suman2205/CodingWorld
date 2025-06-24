#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int st, int end){
    int i=st-1;
    for(int j=st;j<end;j++){
        if(arr[j]<arr[end]){
            swap(arr[++i],arr[j]);
        }
    }
    swap(arr[i+1],arr[end]);
    return i+1;
}
void quickSort(int arr[],int st,int end){
    if(st>=end){
        return;
    }
    int pt=partition(arr,st,end);
    quickSort(arr,st,pt-1);
    quickSort(arr,pt+1,end);
}
int main(){
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter all elements of array: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>arr[i];
    }
    quickSort(arr,0,n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}