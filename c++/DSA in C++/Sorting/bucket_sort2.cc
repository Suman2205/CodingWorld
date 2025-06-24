#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void bucketSort(float arr[],  int size){
    vector<vector<float>> bucket(size,vector<float>());
    // Inserting elements into the buckets
    float min_ele=arr[0];
    float max_ele=arr[0];
    for (int i = 0; i <size; i++)
    {
        max_ele=max(max_ele,arr[i]);
        min_ele=max(min_ele,arr[i]);
    }
    float range=(max_ele-min_ele)/size;
    for (int i = 0; i < size; i++)
    {
        int index=(arr[i]-min_ele)/range;
        float diff=(arr[i]-min_ele)/range - index;
        if (diff==0 && arr[i]!=min_ele)
        {
           bucket[index-1].push_back(arr[i]); 
        }
        else{
            bucket[index].push_back(arr[i]);
        }
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
    float arr[]={6.13,8.45,0.12,1.89,4.75,2.63,7.85,10.39};
    int size=sizeof(arr)/sizeof(arr[0]);
    bucketSort(arr,size);
    for (int i = 0; i <size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}