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
    printf("Enter index number at which you want to add an element:");
    scanf("%d",&p);
    int ele;
    printf("Enter element which you want to add: ");
    scanf("%d",&ele);
    for (int i = n; i>=p; i--)
    {
        arr[i+1]=arr[i];
    }
    n=n+1;
    arr[p]=ele;
    for (int i = 0; i <n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}