#include<stdio.h>
void merge(int arr[],int l,int mid,int r){
    int an=mid-l+1;
    int bn=r-mid;
    int a[an];
    int b[bn];
    for (int i = 0; i <an; i++)
    {
        a[i]=arr[i+l];
    }
    for (int j = 0; j <bn; j++)
    {
        b[j]=arr[mid+j+1];
    }
    int i=0;
    int j=0;
    int k=l;
    while (i<an&&j<bn)
    {
        if (a[i]<b[j])
        {
            arr[k++]=a[i++];
        }
        else{
            arr[k++]=b[j++];
        }
    }
    while (i<an)
    {
        arr[k++]=a[i++];
    }
    while (j<bn)
    {
        arr[k++]=b[j++];
    }
    return;
}
void mergeSort(int arr[],int l,int r){
    if (l>=r)
    {
        return;
    }
    int mid=(l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
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
    mergeSort(arr,0,n);
    printf("The sorted array is ");
    for (int i = 0; i <n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}