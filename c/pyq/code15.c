#include<stdio.h>
int main(){
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    int count=0;
    for (int i = 1; i <=n; i++)
    {
        if (n%i==0)
        {
            count++;
        }
    }
    if (count==2)
    {
        printf("%d is a prime number",n);
    }
    else printf("%d is not a prime number",n);
    return 0;
}