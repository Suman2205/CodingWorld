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
    //sprialprinting
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    int tne=m*n;
    int count=0;
    while (count<tne)
    {
        for (int j = minc; j <=maxc && count<tne; j++)
        {
            printf("%d ",arr[minr][j]);
            count++;
        }
        minr++;
        for (int i = minr; i <=maxr && count<tne; i++)
        {
            printf("%d ",arr[i][maxc]);
            count++;
        }
        maxc--;
        for (int j = maxc; j >=minc && count<tne; j--)
        {
            printf("%d ",arr[maxr][j]);
            count++;
        }
        maxr--;
        for (int i = maxr; i>=minr && count<tne; i--)
        {
            printf("%d ",arr[i][minc]);
            count++;
        }
        minc++; 
    }
    return 0;
}