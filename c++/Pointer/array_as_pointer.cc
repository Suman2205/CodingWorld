#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr+i<<" "<<*(arr+i)<<endl;
        cout<<ptr+i<<" "<<*(ptr+i)<<endl;
    }
    return 0;
}