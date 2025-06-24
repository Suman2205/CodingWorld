#include<stdio.h>
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp; 
}
int partition(int arr[],int first ,int last){
    int i=first;
    for (int j = first; j <last; j++)
    {
        if (arr[j]<arr[last])
        {
            swap(&arr[i++],&arr[j]);
        }
    }
    swap(&arr[i],&arr[last]);
    return i;
}
void quickSort(int arr[],int first,int last){
    if (first>=last)
    {
        return;
    }
    int pi=partition(arr,first,last);
    quickSort(arr,first,pi-1);
    quickSort(arr,pi+1,last);
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
    quickSort(arr,0,n);
    printf("The sorted array is ");
    for (int i = 0; i <n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}