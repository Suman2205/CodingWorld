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
    int target_sum;
    cout<<"Enter element for which you are checking sum of triplets in array:",cin>>target_sum;
    int triplets=0;
    for (int i = 0; i <n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if (arr[i]+arr[j]+arr[k]==target_sum)
                {
                    triplets++;
                }
            }
        }
    }
    cout<<"No. of triplets whose sum is equal to "<<target_sum<<" are "<<triplets;
    return 0;
}