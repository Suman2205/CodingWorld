#include<stdio.h>
#include<math.h>
int factorial(int n){
    int fact=1;
    for (int i = 1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter a number upto which you want to solve sine series:");
    scanf("%d",&n);
    int x;
    printf("enter a number for which you want to solve series:");
    scanf("%d",&x);
    // float y=x*(3.1415/180);
    float result=0;
    for (int i = 1 ,j=1; i <=n; i++,j=j+2)
    {
        float temp=(pow(x,j)/factorial(j));
        if (i%2!=0)
        {
           result =result+temp; 
        }
        else
        {
            result =result-temp; 
        }
    }
    printf("\n%f",result);
    return 0;
}