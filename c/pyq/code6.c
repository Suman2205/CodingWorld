#include<stdio.h>
void sort(int *,int );
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
    printf("The entered array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    sort(arr,n);
    printf("\nThe entered array after sorting is applied is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
void sort(int* a,int x){
    for ( int i = 0; i <x-1; i++)
    {
        for (int j = 0; j <x-i; j++)
        {
            if (*(a+j)>*(a+j+1))
            {
               int temp=*(a+j);
               *(a+j)=*(a+j+1);
               *(a+j+1)=temp;
            }
        }
    }
}