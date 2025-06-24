#include<iostream>
#include<set>
using namespace std;
int main(){
    int n,p,q;
    cout<<"Enter total no. of questions: ";
    cin>>n;
    cout<<"Enter marks a student can get if he/she give correct ans: ";
    cin>>p;
    cout<<"Enter marks a student can get if he/she give wrong ans: ";
    cin>>q;
    set<int>s;
    for (int i = 0; i <=n; i++)
    {
        for (int j = 0; j <=n; j++)
        {
            int correct=i;
            int incorrect=j;
            int unattempted=n-(i+j);
            if (unattempted>=0)
            {
                int score=p*correct+q*incorrect;
                s.insert(score);
            }
            else{
                break;
            }
        }
    }
    cout<<"Possible Marks a student can get: ";
    for(auto val:s){
        cout<<val<<" ";
    }
    return 0;
}