#include<stdio.h>
void fun(int a[],int x){
    a[x];
    for (int i = 0; i <x; i++)
    {
        printf("%d",a[i]);
    }
    return;
}
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d",arr[i]);
    }
    fun(arr,n);
    return 0;
}
