#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int x=3;
    int count =0;
    for (int i = 0; i <=6; i++)
    {
        if (arr[i]>x)
        {
            count++;
        }
    }
    printf("no. of elements in given array greater than %d is %d",x,count);
    return 0;
}