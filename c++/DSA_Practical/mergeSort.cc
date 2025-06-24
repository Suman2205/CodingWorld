#include<iostream>
using namespace std;
void merge(int arr[],int lo,int mid,int hi){
    int an=mid-lo+1;
    int bn=hi-mid;
    int a[an];
    int b[bn];
    for(int i=0;i<an;i++){
        a[i]=arr[lo+i];
    }
    for(int j=0;j<bn;j++){
        b[j]=arr[mid+1+j];
    }
    int i=0;
    int j=0;
    int k=lo;
    while (i<an&&j<bn)
    {
        if(a[i]<b[j]){
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
void mergeSort(int arr[],int lo,int hi){
    if(lo>=hi){
        return;
    }
    int mid=(lo+hi)/2;
    mergeSort(arr,lo,mid);
    mergeSort(arr,mid+1,hi);
    merge(arr,lo,mid,hi);
}
int main(){
    int n,arr[100],i;
    cout<<"Enter no. of elements in array: ";
    cin>>n;
    arr[n];
    cout<<"Enter elements of array: "<<endl;
    for ( i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    mergeSort(arr,0,n);
    cout<<"Sorted Array: "<<endl;
    for ( i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}