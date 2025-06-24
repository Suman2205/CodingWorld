#include<stdio.h>
int main(){
    int n;
    printf("enter a number:",n);
    scanf("%d",&n);
    int a;
    int n=a;
    int sum=0;
    int r=0;
    int lastdigit=0;
    int sum=r+a;
    while (n!=0)
    {
        lastdigit=n%10;
        r=r*10;
        r=r+lastdigit;
        n=n/10;
    }
    printf("the sum of a given number:%d\n",sum);
    printf("the reverse of number:%d",r);
    return 0;
}