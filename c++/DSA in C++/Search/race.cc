#include<iostream>
#include<vector>
using namespace std;
bool canPlaceStudents(vector<int>&pos,int mid, int s){
    int n=pos.size();
    int StudentsReq=1;
    int lastPlaced=pos[0];
    for (int i = 1; i <n; i++)
    {
        if (pos[i]-lastPlaced>=mid)
        {
            StudentsReq++;
            lastPlaced=pos[i];
            if (StudentsReq==s) return true;
        }
    }
    return false;
}
int race(vector<int>&pos,int s){
    int n=pos.size();
    int lo=1;
    int hi=pos[n-1]-pos[0];
    int ans=-1;
    while (lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if (canPlaceStudents(pos,mid,s))
        {
            ans=mid;
            lo=mid+1;
        }
        else hi=mid-1;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter no. of starting positions: ",cin>>n;
    vector<int>pos;
    while(n--){
        int ele;
        cin>>ele;
        pos.push_back(ele);
    }
    int s;
    cout<<"Enter no. of kids: ",cin>>s;
    cout<<"The largest minimum distance b/w two kids starting positions is "<<race(pos,s)<<endl;
    return 0;
}