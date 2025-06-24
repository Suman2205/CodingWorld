#include<iostream>
#include<vector>
using namespace std;
int squareRoot(int target){
    int lo=0;
    int hi=target;
    int ans=-1;
    while (lo<=hi)
    {
        int mid=(lo+hi)/2;
        if (mid*mid<=target)
        {
            ans=mid;
            lo=mid+1;
        }
        else {
            hi=mid-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter any number: ",cin>>n;
    cout<<"The closest square root of entered number is "<<squareRoot(n)<<endl;
    return 0;
}