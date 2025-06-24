#include<iostream>
using namespace std;
int maze(int cr,int cc, int er,int ec){
    if (cr==er-1 and cc==ec-1) return 1;
    if(cr>=er||cc>=ec) return 0;
    return maze(cr+1,cc,er,ec)+maze(cr,cc+1,er,ec);
}
int main(){
    int cr;
    cout<<"Enter starting row no.: ",cin>>cr;
    int cc;
    cout<<"Enter starting column no.: ",cin>>cc;
    int er;
    cout<<"Enter ending row no.: ",cin>>er;
    int ec;
    cout<<"Enter ending column no.: ",cin>>ec;
    int totalways=maze(cr,cc,er,ec);
    cout<<"Totalways to reach destination is "<<totalways<<endl;
    return 0;
}