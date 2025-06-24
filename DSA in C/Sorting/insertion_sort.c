#include<stdio.h>
void InsertionSort(int arr[],int n){ /*repeadetly insert elements from unsorted
                                               subarray to sorted subarrays*/
    for (int i = 1; i < n; i++)
    {
        int curr=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>curr){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
    return;
}
int main(){
    int n;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array: ");
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }
    InsertionSort(arr,n);
    printf("The sorted array is ");
    for (int i = 0; i <n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}