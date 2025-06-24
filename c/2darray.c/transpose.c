#include<stdio.h>
int main(){
    int m;
    printf("enter no. of rows of matrics:");
    scanf("%d",&m);
    int n;
    printf("enter no. of columns of matrics:");
    scanf("%d",&n);
    int arr[m][n];
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j <n; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //transpose
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n"); 
    }
    return 0;
}