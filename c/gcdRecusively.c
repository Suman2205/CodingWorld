#include<stdio.h>
int gcd(int a,int b){
    if (b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
int main(){
    int num1,num2;
    printf("Enter two positive numbers: ");
    scanf("%d%d",&num1,&num2);
    printf("The greatest common factor of %d and %d is %d",num1,num2,gcd(num1,num2));
    return 0;
}