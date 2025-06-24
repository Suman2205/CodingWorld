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
    int l1,r1,l2,r2;
    printf("enter coordinate of rectangle in matrics upto which you want to find sum:");
    scanf("%d %d %d %d",&l1,&r1,&l2,&r2);
    int sum=0;
    printf("the rectangular portion in matrics:\n");
    for (int i = l1; i <=l2; i++)
    {
        for (int j = r1; j <=r2; j++)
        {
            sum +=arr[i][j];
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("the sum of that rectangular portion matrics: %d",sum);
    return 0;
}