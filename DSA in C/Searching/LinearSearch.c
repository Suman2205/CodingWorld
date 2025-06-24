#include<stdio.h>
#include<stdbool.h>
bool LinearSearch(int arr[],int n,int x){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==x)
        {
            return true;
        }
    }
    return false;
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
    int x;
    printf("Enter element which you want to search in array: ");
    scanf("%d",&x);
    if (LinearSearch(arr,n,x))
    {
        printf("%d is present in given array\n",x);
    }
    else{
        printf("%d is not present in given array\n",x);
    }
    return 0;
}