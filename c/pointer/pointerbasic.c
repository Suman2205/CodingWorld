#include<stdio.h>
int main(){
    int a= 5;
    int* x=&a;
    int** y= &x;
    printf("%p\n",x);//x ka mtlb hai address of a
    printf("%p\n",&x);//&x ka mtlb hai x box ka address
    printf("%d\n",*x);//*x ka mtlb hai vo integer ki value jo point kar rhe hai
    printf("%p\n",y);//**y ka mtlb address of x
    printf("%d",**y);//**y with using %d ka mtlb hai vo integer ki value jo point kar rhe hai
    return 0;

}