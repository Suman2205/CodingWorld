#include<stdio.h>
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp; 
}
void selectionSort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        int min_idx=i;
        for (int j = i+1; j<n; j++)
        {
            if (arr[j]<arr[min_idx])
            {
                min_idx=j;
            }
        }
        if (i!=min_idx)
        {
            swap(&arr[min_idx],&arr[i]);
        }
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
    selectionSort(arr,n);
    printf("The sorted array is ");
    for (int i = 0; i <n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}