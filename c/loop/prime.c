#include<stdio.h>
int main(){
    printf("the prime between 1 to 100 are:\n");
    int count=0;
    for (int i = 2; i <=100; i++)
    { 
        int a=0;
        for (int j = 2; j <i; j++)
        {
            if (i%j==0)
            {
               a=1;
               break;
            }
        }
        if (a==0)
        {
            printf("%d ",i);
            count++;
        }  
    }
    printf("\nThere are %d prime numbers between 1 to 100",count);
    return 0;
}