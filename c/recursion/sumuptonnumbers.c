#include<stdio.h>
int sum(int n){
    if (n==1)
    {
        return 1;
    }
    return n+sum(n-1);
}
int main(){
    int n;
    printf("Enter a natural number upto which you want to find out sum:");
    scanf("%d",&n);
    printf("\n%d",sum(n));
    return 0;
}