#include<stdio.h>
int power(int a, int b){
    int result=1;
    for (int i = 1; i <=b; i++)
    {
        result=result*a;
    }
    return result;
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int temp=n;
    int count=0;
    while (temp>0)
    {
       count++;
       temp=temp/10;
    }
    int arm=0;
    int temp1=n;
    for (int i = 1; i <=count; i++)
    {
       int m=temp1%10;
       arm=arm+power(m,count);
       temp1=temp1/10;
    }
    if (arm==n)
    {
        printf("%d is an armstrong number",n);
    }
    else printf("%d is not an armstrong number",n);
    return 0;
}