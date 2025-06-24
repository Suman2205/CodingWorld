#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elements:",cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter "<<i<<"th index element:",cin>>arr[i];
    }
    bool flag=true;
    for ( int i = 0; i <n; i++)
    {
        if (arr[i]>arr[i+1])
        {
            flag=false;
            break;
        }
    }
    if (flag==true)
    {
        cout<<"The given array is sorted";
    }
    else{
        cout<<"The given array is not sorted";
    }
    return 0;
}