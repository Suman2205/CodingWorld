#include<iostream>
using namespace std;
void merge(int A[],int B[],int C[],int n,int m){
    int i,j,k;
    i=j=k=0;
    while (i<n&&j<m)
    {
        if (A[i]<B[j])
        {
            C[k++]=A[i++];
        }
        else{
            C[k++]=B[j++];
        }
    }
    while (i<n)
    {
        C[k++]=A[i++];
    }
    while (j<m)
    {
        C[k++]=B[j++];
    }
    return;
}
int main(){
    int n,m,A[100],B[100],C[100],i;
    cout<<"Enter no. of elements in first array: ";
    cin>>n;
    A[n];
    cout<<"Enter elements of first array in sorted manner: "<<endl;
    for ( i = 0; i <n; i++)
    {
        cin>>A[i];
    }
    cout<<"Enter no. of elements in second array: ";
    cin>>m;
    B[m];
    cout<<"Enter elements of second array in sorted manner: "<<endl;
    for ( i = 0; i <m; i++)
    {
        cin>>B[i];
    }
    C[n+m];
    merge(A,B,C,n,m);
    cout<<"Merged array of first and second array in sorted manner: "<<endl;
    for ( i = 0; i <n+m; i++)
    {
        cout<<C[i]<<" ";
    }
    return 0;
}