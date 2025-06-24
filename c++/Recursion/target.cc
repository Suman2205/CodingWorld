#include<iostream>
using namespace std;
bool target(int *arr, int x, int n, int i){
    if (i==n)
    {
        return false;
    }
    return (arr[i]==x) || target(arr,x,n,i+1);
}
int main(){
    int n=8;
    int arr[8]={2,4,5,6,16,18,10,12};
    int x=16;
    if (target(arr,x,n,0)==1)
    {
        cout<<"The target element exist in given array"<<endl;
    }
    else cout<<"The target element does not exist in given array"<<endl;
    return 0;
}