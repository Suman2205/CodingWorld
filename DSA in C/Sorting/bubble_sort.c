#include<stdio.h>
#include<stdbool.h>
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp; 
}
void sort(int arr[],int n){
    for (int i = 0; i <n-1; i++)
    {
        bool flag=false;
        for (int j = 0; j <n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                flag=true;
            }
        }
        if (!flag)
        {
            break;
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
    sort(arr,n);
    printf("The sorted array is ");
    for (int i = 0; i <n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}