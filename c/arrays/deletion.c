#include<stdio.h>
int main(){
    int n;
    printf("enter no of elements:");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int p;
    printf("Enter index number at which you want to remove an element:");
    scanf("%d",&p);
    for (int i = p; i <n; i++)
    {
        arr[i]=arr[i+1];
    }
    n=n-1;
    // arr[p]=4;
    for (int i = 0; i <n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}