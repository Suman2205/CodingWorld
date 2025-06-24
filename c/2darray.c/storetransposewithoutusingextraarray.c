#include<stdio.h>
int main(){
    int a[10][10],r,c;
    printf("enter no. of rows of matrix:");
    scanf("%d",&r);
    printf("enter no. of columns of matrix:");
    scanf("%d",&c);
    printf("\nenter elements of 1st matrix\n");
    for (int i = 0; i <r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enter elements a%d%d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nentered matrix: \n");
    for (int i = 0; i <r; i++)
    {
        for (int j = 0; j <c; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i <r; i++)
    {
        int temp;
        for (int j = 0; j<=i; j++)
        {
           temp=a[i][j];
           a[i][j]=a[j][i];
           a[j][i]=temp;
        }
    }
    printf("\n");
    for (int i = 0; i <c; i++)
    {
        for (int j = 0; j <r; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
