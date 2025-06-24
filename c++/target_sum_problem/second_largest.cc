#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,1,6,5,8,7,8};
    int n=8;
    int max=INT32_MIN;
    int smax=INT32_MIN;
    for (int i = 0; i <n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    for (int i = 0; i <n; i++)
    {
        if (arr[i]>smax&&arr[i]!=max)
        {
            smax=arr[i];
        }
    }
    cout<<"The second largest number in array is "<<smax;
    return 0;
}