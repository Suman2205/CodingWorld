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
    //wave printing
    for (int i = 0; i <m; i++)
    {
        if (i%2==0)
        {
            for (int j = 0; j < n; j++)
            {
            printf("%d ",arr[i][j]);
            }   
        }
        else{
            for (int j =n-1; j >=0; j--)
            {
            printf("%d ",arr[i][j]);
            }   
        }                 
    }  
    return 0;
}