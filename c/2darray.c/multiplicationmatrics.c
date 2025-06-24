#include<stdio.h>
int main(){
    int m;
    printf("enter no. of rows of 1st matrics:");
    scanf("%d",&m);
    int n;
    printf("enter no. of columns of 1st matrics:");
    scanf("%d",&n);
    int arr[m][n];
    printf("enter elements of matrics\n");
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    int p;
    printf("enter no. of rows of 2nd matrics:");
    scanf("%d",&p);
    int q;
    printf("enter no. of columns of 2nd matrics:");
    scanf("%d",&q);
    int brr[p][q];
    printf("enter elements of matrics\n");
    for (int i = 0; i <p; i++)
    {
        for (int j = 0; j <q; j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    int res[m][q];
    if (n==p)
    {
    printf("multiplication of matrics:\n");
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j <q; j++)
        {
           res[i][j]=0;
           for (int k = 0; k <n; k++)
           {
            res[i][j]+=arr[i][k]*brr[k][j];
           }
        }
    }
    }
    else printf("matrics multiplication is not possible");
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j <q; j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}