#include<stdio.h>
void main(){
    int i,c=0,n;
    int a=0; 
    int b=1;
    printf("Enter a number to generate fibonacci for first n terms:\n");
    scanf("%d",&n);
    printf("Fibonacci series for first %d terms:-\n",n);
    for ( i = 1; i<n; i++)
    {
    printf("%d ",c);
    a=b;
    b=c;
    c=a+b;
    }
}