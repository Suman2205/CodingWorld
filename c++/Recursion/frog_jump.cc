#include<iostream>
using namespace std;
int frog(int *arr,int n,int i){
    if (i==n-1) return 0;
    if(i==n-2) return frog(arr,n,i+1)+abs(arr[i]-arr[i+1]);
    return min(frog(arr,n,i+1)+abs(arr[i]-arr[i+1]),frog(arr,n,i+2)+abs(arr[i]-arr[i+2]));
}
int main(){
    int n=4;
    int arr[]={10,30,40,20};
    cout<<frog(arr,n,0)<<endl;
    return 0;
}