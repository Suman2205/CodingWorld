#include<stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if (x%2==0)
    {
        goto even;
    }
    else {
        goto odd;
    }
    even:
    printf("%d is an even number",x);
    return 0;
    odd:
    printf("%d is an odd number",x);
    return 0;
}