#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    int i,j;
    for ( i = 0; i <n-1; i++)
    {
        for ( j = 0; j <n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
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
    bubbleSort(arr,n);
    cout<<"Sorted Array: "<<endl;
    for ( i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}