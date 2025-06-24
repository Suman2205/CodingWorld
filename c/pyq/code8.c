#include<stdio.h>
int power(int a,int b){
    int result=1;
    for (int i = 1; i <=b; i++)
    {
        result=result*a;
    }
    return result;
}
int main(){
    int n;
    printf("enter any number:");
    scanf("%d",&n);
    int temp1=n;
    int temp2=n;
    int count=0;
    while (temp1>0)
    {
        count++;
        temp1=temp1/10;
    }
    int arm=0;
    for (int i = 0; i <=count; i++)
    {
        int m=temp2%10;
        arm=arm+power(m,count);
        temp2=temp2/10;
    }
    if (arm==n)
    {
        printf("%d is an armstrong number",n);
    }
    else printf("%d is not an armstrong number",n);
    return 0;
}