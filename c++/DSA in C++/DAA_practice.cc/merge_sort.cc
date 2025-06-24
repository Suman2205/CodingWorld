#include<iostream>
using namespace std;
void merge(int arr[],int st,int mid,int end){
    int an=mid-st+1;
    int bn=end-mid;
    int a[an];
    int b[bn];
    for(int i=0;i<an;i++){
        a[i]=arr[st+i];
    }
    for(int i=0;i<bn;i++){
        b[i]=arr[mid+i+1];
    }
    int i=0;
    int j=0;
    int k=st;
    while(i<an&&j<bn){
        if(a[i]<=b[j]){
            arr[k++]=a[i++];
        }
        else{
            arr[k++]=b[j++];
        }
    }
    while(i<an){
        arr[k++]=a[i++];
    }
    while(j<bn){
        arr[k++]=b[j++];
    }
}
void mergeSort(int arr[],int st,int end){
    if(st>=end){
        return;
    }
    int mid=st+(end-st)/2;
    mergeSort(arr,st,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,st,mid,end);
}
int main(){
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter all elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}