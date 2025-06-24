#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    int sum=0;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    while (n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    printf("The sum of individual digits of a positive integer is %d",sum);
    return;
}