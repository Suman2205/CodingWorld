#include<stdio.h>
int main(){
    int n;
    printf("enter no. of rows/column of matrics:");
    scanf("%d",&n);
    int arr[n][n];
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    int sum=0;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            sum +=arr[i][j];
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("the sum of matrics: %d",sum);
    return 0;
}