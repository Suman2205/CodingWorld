#include<iostream>
#include<limits.h>
using namespace std;
int largest(int arr[],int n){
    int max=INT_MIN;
    int maxindex;
    for (int i = 0; i <n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
            maxindex=i;
        }
        
    }
    return maxindex;
}
int main(){
    int array[]={2,3,5,7,6,4};
    int maxindex=largest(array,6);
    for (int i = 0; i < 6; i++)
    {
        if (array[i]==array[maxindex])
        {
            array[i]=-1;
        }
    }
    int indexofseclargest=largest(array,6);
    cout<<array[indexofseclargest]<<endl;
    return 0;
}