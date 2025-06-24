#include<stdio.h>
int main(){
    int n;
    printf("enter no. of rows:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n-i; j++)
        {
            printf(" ");
        }
        char a=64;
        for (int k = 1; k<=i; k++)
        {
            printf("%c",a+k);
        }
        char ch=i+63;
        for (int l = 1; l <=i-1; l++)
        {
            printf("%c",ch);
            ch--;
        }
        printf("\n");
    }
    return 0;
    
}