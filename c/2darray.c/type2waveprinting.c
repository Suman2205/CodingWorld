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
    //type2 wave printing
    for (int j = 0; j <n; j++)
    {
        if (j%2==0)
        {
            for (int i = 0; i <m; i++)
            {
                printf("%d ",arr[i][j]);
            }
            
        }
        else
        {
           for (int i = m-1; i >=0; i--)
            {
                printf("%d ",arr[i][j]);
            }
             
        }
         
    }
    
    return 0;
}