#include<stdio.h>
int main(){
    int sum=0;
    int arr[7]={1,2,3,4,5,6,7};
    for (int i = 0; i <7; i++)
    {
      sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}