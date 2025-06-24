#include<iostream>
using namespace std;
int maxf(int *arr,int idx,int n){
    if (idx==n-1)
    {
        return arr[idx];
    }
    return max(arr[idx],maxf(arr,idx+1,n));
}
int main(){
    int n=5;
    int arr[]={3,10,3,12,5};
    int max= maxf(arr,0,n);
    cout<<max;
    return 0;
}