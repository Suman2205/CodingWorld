#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
    int min_idx,i,j;
    for ( i = 0; i <n-1; i++)
    {
        min_idx=i;
        for ( j = i+1; j <n; j++)
        {
            if (arr[j]<arr[min_idx])
            {
                min_idx=j;
            }
        }
        if (i!=min_idx)
        {
            swap(arr[i],arr[min_idx]);
        }
    }
    return;
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
    selectionSort(arr,n);
    cout<<"Sorted Array: "<<endl;
    for ( i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}