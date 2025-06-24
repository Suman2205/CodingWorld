#include<stdio.h>
int main(){
    int n;
    printf("enter no. of rows:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        char ch=65;
        for (int j = 1; j<=i; j++)
        {
            if (i%2==0)
            {
            printf("%c",ch);
            ch++; 
            }
            else printf("%d",j);
            
        }
        printf("\n");
    }
    return 0;
    
}