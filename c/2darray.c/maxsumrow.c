#include<stdio.h>
#include<limits.h>
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
    int maxsumrow=INT_MIN;
    int idx;
    for (int i = 0; i <n; i++)
    {
        int sum=0;
        for (int j = 0; j <n; j++)
        {
            sum +=arr[i][j];
            if (maxsumrow<sum)
            {
                maxsumrow=sum;
                idx=i;
            }
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("the index of row having the max sum: %d",idx);
    return 0;
}