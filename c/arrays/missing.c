#include<stdio.h>
int main(){
    int n;
    printf("enter a number upto which you want to find out a missing number: ");
    scanf("%d",&n); 
    int arr[n-1];
    for(int i=0; i<n-1;i++){
        printf("enter element number %d:",i+1);
        scanf("%d",&arr[i]);
    }
    int asum=(n*(n+1))/2;
    int sum=0;
    for (int i = 0; i<n-1; i++)
    {
        sum=sum+arr[i];
    }
    int x=asum-sum;
    printf("the missing number is %d",x);
    return 0;
}