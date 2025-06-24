#include<stdio.h>
int main(){
    int n;
    printf("enter no. of rows:");
    scanf("%d",&n);
    int m=1;
    while (m>=n/2)
    {
        for (int i = 1; i <=n; i++)
        {
           for (int j = 1; j<=n; j++)
           {
           if (i==n || j==n || i==1 || j==1)
           {
            printf(" * ");
           }
           }
           printf("\n");
        }
        m++;
    }
    return 0;
}