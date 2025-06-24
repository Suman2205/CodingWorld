#include<stdio.h>
int gcd(int a, int b){
    while (b>0)
    {
        int temp=b;
        b=a%b;
        printf("%d ",b);
        a=temp;
    }
    return a;
}
int main(){
    int x,y,res;
    printf("Enter value of a(bigger one): ");
    scanf("%d",&x);
    printf("Enter value of b(smaller one): ");
    scanf("%d",&y);
    res=gcd(x,y);
    printf("The greatest common factor of %d and %d is %d",x,y,res);
    return 0;
}