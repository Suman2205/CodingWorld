#include<stdio.h>
long factorial(int);
int main(){
    int n,i,c;
    printf("Enter number of rows you wish to see in pascal triangle:\n");
    scanf("%d",&n);
    for (i =0; i<n; i++)
    {
        for (c= 0; c<=n-i-1; c++)
        {
            printf(" ");
        } 
        for (c = 0; c<=i; c++)
        {
            printf("%d ",factorial(i)/(factorial(c)*factorial(i-c)));  
        }
        printf("\n");    
    }
    return 0;
}
long factorial(int x){
    int c;
   long result=1;
    for (c =1; c<=x; c++)
    {
        result=result*c;
    }
    return result;
}