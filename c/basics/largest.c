#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Enter third number:");
    scanf("%d",&c);
    printf("The largest number out of three given number is ");
    (a>b)&&(b>c)?printf("%d",a):(b>c)?printf("%d",b):printf("%d",c);
    return 0;
}