#include<iostream>
using namespace std;
int main(){
    int arr[3]={2,4,6};
    int *ptr=&arr[0];
    cout<<"Initial address stored in ptr is "<<ptr<<" and value pointed by ptr is "<<*ptr<<"\n";
    cout<<"After incrementation the results are:"<<endl;
    cout<<*ptr++<<" "<<*++ptr<<"\n";            // 4      4 
    cout<<(*ptr)++<<" "<<++*ptr<<"\n";         //  7      7
    return 0;
}