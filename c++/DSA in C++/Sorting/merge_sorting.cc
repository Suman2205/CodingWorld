#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[], int l ,int mid, int r){
    int an=mid-l+1;
    int bn=r-mid;
    int a[an];
    int b[bn];
    for (int i = 0; i <an; i++)
    {
        a[i]=arr[l+i];
    }
    for (int j = 0; j <bn; j++)
    {
        b[j]=arr[mid+j+1];
    }
    int i=0;
    int j=0;
    int k=l;
    while (i<an&&j<bn)
    {
        if (a[i]<b[j])
        {
            arr[k++]=a[i++];
        }
        else{
            arr[k++]=b[j++];
        }
    }
    while (i<an)
    {
        arr[k++]=a[i++];
    }
    while (j<bn)
    {
        arr[k++]=b[j++];
    }
    return;
}
void mergesort(int arr[],int l, int r){
    if (l>=r)
    {
        return;
    }
    int mid=(l+r)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    merge(arr,l,mid,r);
    return;
}
int main(){
    int n=8;
    int arr[]={10,12,8,16,13,20,17,9};
    mergesort(arr,0,n-1);
    cout<<"The sorted array is:"<<endl;
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"End"<<endl;
    return 0;
}