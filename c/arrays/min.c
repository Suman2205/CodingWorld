#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={1,2,7,4,5,6,9};
    int min=INT_MAX;
    //int min=arr[0];
    for (int i = 0; i <7; i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("%d",min);
    return 0;
}
    