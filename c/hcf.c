#include<stdio.h>
int min(int a,int b){
    if (a>b) return b;
    return a;
}
int main(){
    int a,b;
    printf("Enter two positive number: ");
    scanf("%d%d",&a,&b);
    for (int i = min(a,b); i>0; i--)
    {
        if (a%i==0&&b%i==0)
        {
            printf("The greatest common factor of %d and %d is %d",a,b,i);
            break;
        }
    }
    return 0;
}