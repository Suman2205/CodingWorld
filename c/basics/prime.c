#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,j,count;
    printf("Prime no. series\n");
    printf("Enter any number:\n");
    scanf("%d",&n);
    printf("The prime numbers between 1 to %d:\n",n);
    for (int i = 1; i<=n; i++)
    {
        count=0;
        for (int j = 1; j<=i; j++)
        {
            if (i%j==0)
            {
                count++;
            } 
        }
        if (count==2)
        {
            printf("%d\t",i);
        }
    }
    getch();
}