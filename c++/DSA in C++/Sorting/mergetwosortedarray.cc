#include<iostream>
using namespace std;
void merge(int num1[],int num2[],int n1, int n2,int num3[]){
    int i=0;
    int j=0;
    int k=0;
    while (k<n1+n2)
    {
        if (num1[i]<num2[j])
        {
            num3[k++]=num1[i++];
        }
        else{
            num3[k++]=num2[j++];
        }
    }
    while (i<n1)
    {
        num3[k++]=num1[i++];
    }
    while (j<n2)
    {
        num3[k++]=num2[j++];
    }
}
int main(){
    int num1[]={5,8,10};
    int n1=sizeof(num1)/sizeof(num1[0]);
    int num2[]={2,7,8};
    int n2=sizeof(num2)/sizeof(num2[0]);
    int num3[n1+n2];
    merge(num1,num2,n1,n2,num3);
    for (int i = 0; i <n1+n2;i++)
    {
        cout<<num3[i]<<" ";
    }
    return 0;   
}