#include<stdio.h>
int main(){
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        printf("enter %dth index element:",i);
        scanf("%d",&arr[i]);
        //printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;   
}