#include<stdio.h>
int fibo(int n){
    if (n==0) return 0;
    if (n==1||n==2) return 1; 
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    printf("Enter no. of terms you wnat to see in fibonacci series:");
    scanf("%d",&n);
    printf("The fibonacci series having 0th term and n terms is\n");
    for (int i = 0; i <=n; i++)
    {
        printf("%d ",fibo(i));
    }
    return 0;
}