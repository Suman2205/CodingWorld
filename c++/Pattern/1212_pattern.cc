#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows: ",cin>>n;
    int m;
    cout<<"Enter no. of columns: ",cin>>m;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            if ((i+j)%2!=0)
            {
                cout<<2;
            }
            else{
                cout<<1;
            }
        }
        cout<<endl;
    }
    return 0;
}