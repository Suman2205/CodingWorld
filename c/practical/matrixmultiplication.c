#include<stdio.h>
#include<conio.h>
int main(){
    int m,n,p,i,j,A[10][10],B[10][10];
    int MatMul(int A[10][10],int B[10][10],int m,int n,int p);
    printf("Enter the number of rows and columns of first matrix:");
    scanf("%d%d",&m,&n);
    printf("\nenter elements of 1st matrix\n");
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("enter elements a%d%d:",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nThe number of rows for second matrix will be %d\n",n);
    printf("Enter number of columns of second matrics:");
    scanf("%d",&p);
    printf("\nenter elements of 2nd matrix\n");
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <p; j++)
        {
            printf("enter elements b%d%d:",i+1,j+1);
            scanf("%d",&B[i][j]);
        }
    }
    MatMul(A,B,m,n,p);
    getch();
}
int MatMul(int A[10][10],int B[10][10],int m,int n,int p){
    int i,j,k,C[10][10];
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j <p; j++)
        {
           C[i][j]=0;
           for (int k = 0; k <n; k++)
           {
            C[i][j]=C[i][j]+A[i][k]*B[k][j];
           }
        }
    }
    printf("The resultant matrix is:\n");
    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j <p; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    getch();
}