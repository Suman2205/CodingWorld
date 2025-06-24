#include<stdio.h>
int main(){
    int m,n,i;
    printf("Enter base m:");
    scanf("%d",&m);
    printf("Enter power n:");
    scanf("%d",&n);
    int result=1;
    for ( i = 1; i <=n; i++)
    {
        result=result*m;
    }
    printf("The value of %d^%d is %d",m,n,result);
    getch();
    return 0;
}