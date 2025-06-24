#include<stdio.h>
int main(){
    int prod=1;
    int arr[7]={1,2,3,4,5,6,7};
    for (int i = 0; i <7; i++)
    {
        prod*=arr[i];  
    }
    printf("%d",prod);
    return 0;
}