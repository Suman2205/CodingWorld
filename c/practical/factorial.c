#include<stdio.h>
#include<conio.h>
#include<math.h>
int factorial(int n){
    if (n==0||n==1)
       return 1;
    else
       return n*factorial(n-1);
}
int rfactorial(int n){
    int fact=1;
    for (int i = n; i>1; i--)
    {
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    printf("\n");
    printf("Non-recursive solution: %d! = %d",n,factorial(n));
    printf("\n");
    printf("Recursive solution: %d! = %d",n,rfactorial(n));
    getch();
    return 0;
}