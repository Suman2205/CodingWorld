#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int x=2*n-1;
    for (int k = 1; k <=n; k++)
    {
      for (int i = 1; i <=x; i++)
      {
         for (int j = 1; j<=x; j++)
         {
         if (i==x || j==x || i==a || j==b &&n>0)
         {
            printf("%d ",n);
            n--;
            x--;
            a++;
            b++;
         }
         if (i==x || j==x || i==a || j==b && n>0)
         {
            printf("%d ",n);
            n--;
            x--;
            a++;
            b++;
         }
         if (i==x || j==x || i==a || j==b && n>0)
         {
            printf("%d ",n);
            n--;
            x--;
            a++;
            b++;
         }
         }
         printf("\n");
      }
    }
    return 0;
}