#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int k=0;
    printf("Element no. Element Address");
    while (k<5)
    {
        printf("\nx[%d] = \t%8d %9p",k,*(arr+k),arr+k);
        k++;
    }
    return 0;
}