#include<iostream>
using namespace std;
void insertionSort(int arr[],int n){
    int current,i,j;
    for ( i = 1; i <n; i++)
    {
        current=arr[i];
        j=i-1;
        while (current<arr[j]&&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
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
    insertionSort(arr,n);
    cout<<"Sorted Array: "<<endl;
    for ( i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}