#include<stdio.h>
int finalsum(int n){
    if(n==0 || n==1)return n;
    int sum=n + finalsum(n-1);
    return sum;    
}
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int sum= finalsum(n);
    printf("%d",sum);
    return 0;
}