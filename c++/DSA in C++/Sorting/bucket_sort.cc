#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void bucketSort(float arr[],  int size){
    vector<vector<float>> bucket(size,vector<float>());
    // Inserting elements into the buckets
    for (int i = 0; i < size; i++)
    {
        int index=arr[i]*size;
        bucket[index].push_back(arr[i]);
    }
    // Sorting individual buckets
    for (int i = 0; i < size; i++)
    { 
        if (!bucket.empty()){
            sort(bucket[i].begin(),bucket[i].end());
        }
    }
    // Combining all elements
    int k=0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <bucket[i].size(); j++)
        {
            arr[k++]=bucket[i][j];
        }
        
    }
    return;
}
int main(){
    float arr[]={0.13,0.45,0.12,0.89,0.75,0.63,0.85,0.39};
    int size=sizeof(arr)/sizeof(arr[0]);
    bucketSort(arr,size);
    for (int i = 0; i <size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}