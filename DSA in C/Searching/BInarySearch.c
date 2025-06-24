#include<stdio.h>
#include<stdbool.h>
bool BinarySearch(int arr[],int n,int x){
    int lo=0;
    int hi=n;
    while (lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if (arr[mid]==x)
        {
            return true;
        }
        else if (arr[mid]<x)
        {
            lo=mid+1;
        }
        else hi=mid-1;
    }
    return false;
}
int main(){
    int n;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of sorted array:\n");
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter element which you want to search in array: ");
    scanf("%d",&x);
    if (BinarySearch(arr,n,x))
    {
        printf("%d is present in given array\n",x);
    }
    else{
        printf("%d is not present in given array\n",x);
    }
    return 0;
}