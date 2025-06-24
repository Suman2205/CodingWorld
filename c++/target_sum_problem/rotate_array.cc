#include<iostream>
using namespace std;
void reverse(int arr[],int si,int ei){
    for (int i =si,j=ei; i <j; i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main(){
    int n;
    cout<<"Enter no. of elements: ",cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter "<<i<<"th index element:",cin>>arr[i];
    }
    int k;
    cout<<"Enter no. of times you want to rotate array: ",cin>>k;
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}