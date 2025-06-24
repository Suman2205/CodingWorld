#include<iostream>
#include<stdbool.h>
using namespace std;
bool binarySearch(int arr[],int n,int x){
    int beg,mid,end;
    beg=0;
    end=n-1;
    while (beg<=end)
    {
        mid=(beg+end)/2;
        if (arr[mid]==x)
        {
            return true;
        }
        else if (arr[mid]>x)
        {
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
    }
    return false;
}
int main(){
    int n,arr[100],i,x;
    cout<<"Enter no. of elements in array: ";
    cin>>n;
    arr[n];
    cout<<"Enter elements of array in sorted manner: "<<endl;
    for ( i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element which you want to search in given array: ";
    cin>>x;
    if (binarySearch(arr,n,x))
    {
        cout<<x<<" is present in given array"<<endl;
    }
    else{
        cout<<x<<" is not present in given array"<<endl;
    }
    return 0;
}