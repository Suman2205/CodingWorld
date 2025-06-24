#include<stdio.h>
int main(){
    int a[10][10],transpose[10][10],r,c;
    printf("enter no. of rows and columns of matrix:");
    scanf("%d%d",&r,&c);
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
        if (j==c-1)
        {
            printf("\n");
        }
        } 
    }
    for (int i = 0; i <c; i++)
    {
        for (int j = 0; j <r; j++)
        {
            transpose[i][j]=a[j][i];
        }
    }
    printf("\ntranspose of the matrix: \n");
    for (int i = 0; i <c; i++)
    {
        for (int j = 0; j <r; j++)
        {
            printf("%d ",transpose[i][j]);
        if (j==r-1)
        {
            printf("\n");
        }
        }
    }
    return 0;
}