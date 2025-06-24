#include<stdio.h>
#include<limits.h>
#include<math.h>
int main(){
    FILE *ptr=fopen("number.txt","r");
    int n;
    int size=0;
    int arr[100];
    while (fscanf(ptr,"%d",&n)!=EOF)
    {
        // printf("%d ",v);
        arr[size]=n;
        size++;
    }
    printf("\n");
    arr[size];
    // for (int j= 0; j <size; j++)
    // {
    //     printf("%d ",arr[j]);
    // }
    int max=arr[0];
    for (int i = 0; i <size; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        } 
    }
    // printf("%d ",max);
    FILE *ptr1=fopen("num.txt","w");
    fprintf(ptr1,"the copied array from another file is:\n");
    for ( int k = 0; k <size; k++)
    {
        fprintf(ptr1,"%d ",arr[k]);
    }
    fprintf(ptr1,"\nthe maximum number from copied array is %d \n",max);
    fclose(ptr);
    fclose(ptr1);
    return 0;
}