#include<stdio.h>
void fun(int a[]){
    for (int i = 0; i < 7; i++)
    {
        printf("%d ",a[i]);
    }
    a[0]=10;
    return;
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    printf("%d\n",arr[0]);
    fun(arr);
    printf("\n%d",arr[0]);
    return 0;
}