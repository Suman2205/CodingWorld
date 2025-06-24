#include<stdio.h>
int factorial(int x){
    int fact=1;
    for (int i = 2; i <=x; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int combination(int n, int r){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int n;
    printf("enter no. of lines:");
    scanf("%d",&n);
    int m=n-1;
    for (int i =0; i<=m; i++)
    {
        for (int k = 0; k<=n-i; k++)
        {
            printf("  ");
        } 
        for (int j = 0; j <=i; j++)
        {
            int icj=combination(i,j);
            printf(" %d  ",icj);  
        }
        printf("\n");    
    }
    return 0;
}