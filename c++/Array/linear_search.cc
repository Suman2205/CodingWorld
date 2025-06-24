#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,7,9,3,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter element which you want to search in array:",cin>>key;
    bool flag=false;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            cout<<key<<" is present in given array at index "<<i;
            flag=true;
            break;
        }
    }
    if(flag==false){
        cout<<key<<" is not found in given array";
    }
    return 0;
}