#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}
int main(){
    int x;
    printf("Enter first number a=");
    scanf("%d",&x);
    int y;
    printf("Enter second number b=");
    scanf("%d",&y);
    swap(&x,&y);
    printf("After swaping the value of a=%d\n",x);
    printf("After swaping the value of b=%d",y);
}