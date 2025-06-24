#include<iostream>
#include<vector>
using namespace  std;
int partition(int arr[],int first , int last){
    int i=first-1;
    for (int j = first; j <last; j++)
    {
        if (arr[j]<arr[last])
        {
            swap(arr[++i],arr[j]);
        }
    }
    swap(arr[i+1],arr[last]);
    return i+1;
}
void quicksort(int arr[], int first,int last){
    if (first>=last)
    {
       return; 
    }
    int pi=partition(arr,first,last);
    quicksort(arr,first,pi-1);
    quicksort(arr,pi+1,last);
    return;
}
int main(){
    int n;
    cout<<"No. of elements: ",cin>>n;
    int arr[n];
    for (int i = 0; i<n; i++)
    {
        cout<<"Enter "<<i<<"th index element:",cin>>arr[i];
    }
    cout<<"The entered array is:"<<endl;
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quicksort(arr,0,n-1);
    cout<<"The sorted array is:"<<endl;
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}