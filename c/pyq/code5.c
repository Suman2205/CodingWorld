#include<stdio.h>
int fibo(int x);
int main(){
    int n;
    printf("Enter a number of terms you want to see in fibonacci series:");
    scanf("%d",&n);
    printf("The 0th term and first n terms of fibonacci series is:\n");
    for (int i = 0; i <=n; i++)
    {
        printf("%d ",fibo(i));
    }
    return 0;
}
int fibo(int x){
    if (x==0)
    {
        return 0;
    }
    if (x==1||x==2)
    {
        return 1;
    }
    else return fibo(x-1)+fibo(x-2);
}
