#include<stdio.h>
int gcd(int a, int b){
    while (b>0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
    int a,b,res;
    printf("Enter two positive number: ");
    scanf("%d%d",&a,&b);
    res=(a*b)/gcd(a,b);
    printf("The Lowest common factor of %d and %d is %d",a,b,res);
    return 0;
}