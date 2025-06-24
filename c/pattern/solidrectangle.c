#include<stdio.h>
int main(){
    int n,m;
    printf("enter no. of rows:");
    scanf("%d",&n);
    printf("enter no. of columns:");
    scanf("%d",&m);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=m; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
    
}