#include<stdio.h>
int main(){
    int n;
    printf("Enter size of an array:");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        printf("Enter %dth index element:",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 1; i <n; i++)
    {
        for (int j = 0; j <=n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("The sorted array:\n");
    for (int k = 0; k <n; k++)
    {
        printf("%d ",arr[k]);
    }
    return 0;
}