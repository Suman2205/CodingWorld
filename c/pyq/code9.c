#include<stdio.h>
#include<math.h>
int power(int a , int b){
    int result=1;
    for (int i = 1; i <=b; i++)
    {
        result=result*a;
    }
    return result; 
}
int fact(int n){
    if (n==1||n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int x;
    printf("Enter value of x:");
    scanf("%d",&x);
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    float y=x*(3.142/180.0);
    float result=0;
    for (int i = 1 ,j=1; i <=n; i++,j=j+2)
    {
        float temp=(pow(y,j)/fact(j));
        if (i%2!=0)
        {
           result =result+temp;
           printf("%f\n",result); 
        }
        else
        {
            result =result-temp;
            printf("%f\n",result);
        }
    }
    printf("The required result is %f",result);
    return 0;
}