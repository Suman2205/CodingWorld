#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum=1;
    printf(" %d ",a);
    printf(" %d ",b);
    for (int i = 1; i<=n-2; i++)
    {
       sum=a+b;
       a=b;
       printf(" %d ",sum);
       b=sum;  
    }
    return 0;
}