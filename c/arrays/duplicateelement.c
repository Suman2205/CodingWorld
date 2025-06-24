#include<stdio.h>
int main(){
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        printf("enter %dth index element:",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
      for (int j = i+1; j <n; j++)
      {
        if (arr[i]==arr[j])
        {
            printf("%d is the duplicate element\n",arr[j]);
            break;
        }
      }       
    }
    return 0;
}