#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={1,2,8,4,10,9,7};
    int max=INT_MIN;
    int smax=INT_MIN;
    for (int i = 0; i <7; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        } 
    }
    for (int i = 0; i <7; i++)
    {
        if (smax<arr[i] && max!=arr[i])
        {
          smax=arr[i];
        }  
    }
    printf("%d",smax);
    return 0;
}    