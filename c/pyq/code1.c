#include<stdio.h>
int main(){
    int i;
    printf("The numbers between 100 and 200 which are divisible by 3 but not by 4 are:\n");
    for ( i = 101; i <200; i++)
    {
        if (i%3==0 && i%4!=0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}