#include<iostream>
#include<stack>
using namespace std;
bool check(int arr[],int loc,int beg,int end){
    for (int i =loc-1; i>=beg; i--)
    {
        if(arr[i]>arr[loc]){
            return false;
        }
    }
    for (int i = loc+1; i <=end; i++)
    {
        if(arr[i]<arr[loc]){
            return false;
        }
    }
    return true;
}
int quick(int arr[],int n,int beg,int end){
    int left=beg;
    int right=end;
    int loc=beg;
    step2:
        for (int i = right; i>=left; i--)
        {
            while (arr[loc]<=arr[right]&&loc!=right)
            {
                right--;
            }
            if (arr[loc]>arr[right])
            {
                int temp=arr[loc];
                arr[loc]=arr[right];
                arr[right]=temp;
                loc=right;
            }
        }
        for (int i =left; i <=right; i++)
        {
            while (arr[left]<=arr[loc]&&loc!=left)
            {
                left++;
            }
            if (arr[loc]<arr[left])
            {
                int temp=arr[loc];
                arr[loc]=arr[left];
                arr[left]=temp;
                loc=left;
            }
        }
        if(check(arr,loc,beg,end)){
            exit;
        }
        else{
            goto step2;
        } 
    return loc;
}
void quickSort(int arr[],int n){
    int lower[100];
    int upper[100];
    int top=-1;
    if (n>1)
    {
        top++;
        lower[0]=0;
        upper[0]=n-1;
    }
    while (top!=-1)
    {
        int beg=lower[top];
        int end=upper[top];
        top--;
        int loc=quick(arr,n,beg,end);
        if(beg<loc-1){
            top++;
            lower[top]=beg;
            upper[top]=loc-1;
        }
        if(loc+1<end){
            top++;
            lower[top]=loc+1;
            upper[top]=end;
        }
    }
}
int main(){
    int n,arr[100],i;
    cout<<"Enter no. of elements in array: ";
    cin>>n;
    arr[n];
    cout<<"Enter elements of array: "<<endl;
    for ( i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    quickSort(arr,n);
    cout<<"Sorted Array: "<<endl;
    for ( i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}