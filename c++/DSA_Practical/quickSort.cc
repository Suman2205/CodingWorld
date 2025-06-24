#include<iostream>
using namespace std;
int quick(int arr[],int lo,int hi){
    int i=lo-1;
    for(int j=lo;j<hi;j++){
        if(arr[j]<arr[hi]){
            swap(arr[++i],arr[j]);
        }
    }
    swap(arr[i+1],arr[hi]);
    return i+1;
}
void quickSort(int arr[],int lo,int hi){
    if(lo>=hi){
        return;
    }
    int pi=quick(arr,lo,hi);
    quickSort(arr,lo,pi-1);
    quickSort(arr,pi+1,hi);
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
    quickSort(arr,0,n);
    cout<<"Sorted Array: "<<endl;
    for ( i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}