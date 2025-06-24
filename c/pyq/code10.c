#include<stdio.h>
int main(){
    int n;
    printf("Enter size of an array:");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %dth index element:",i);
        scanf("%d",&arr[i]);
    }
    int even[n];
    int odd[n];
    int esize=0;
    int osize=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            even[esize]=arr[i];
            esize++;
        }
        else{
            odd[osize]=arr[i];
            osize++;
        }
    }
    printf("\nArray containing only even integer:\n");
    for (int i = 0; i < esize; i++)
    {
       printf("%d ",even[i]);
    }
    printf("\nArray containing only odd integer:\n");
    for (int i = 0; i < osize; i++)
    {
       printf("%d ",odd[i]);
    }
    return 0;
}