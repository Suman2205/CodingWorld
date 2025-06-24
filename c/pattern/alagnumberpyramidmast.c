#include<stdio.h>
int main(){
    int n;
    printf("enter no. of rows:");
    scanf("%d",&n);
    int m=n-1; 
    int a=0;
    for (int i = 1; i <=2*n-1; i++)
    {
        if (i<=n)
        { 
           a++;
           printf("%d",a);  
        }
        else
        { 
        a--;
        printf("%d",a);
        }
    }
    printf("\n");
    for (int i = 1; i <=m; i++)
    {
        int b=0;
        for (int j = 1; j <=n-i; j++)
        {
            b++;
            printf("%d",b);
            
        }
        for (int k = 1; k<=2*i-1; k++)
        {
            printf(" ");
           
        }
        for (int j = 1; j <=n-i; j++)
        {
            printf("%d",b);
            b--;
        }
        printf("\n");
    }
    return 0;
    
}
//It can be also done if initially we declare nst or nsp where nst=n and nsp=1 and put j=nst and k=nsp and last we do nst-- and nsp+=2.