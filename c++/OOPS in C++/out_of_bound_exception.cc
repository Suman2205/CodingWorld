#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter all elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    while(true){
        cout<<"Is you have query to check any elements of array(Y/N): ";
        char q;
        cin>>q;
        if(q=='N'){
            break;
        }
        if(q=='Y'){
            cout<<"Enter index no. of which you want to print value: ";
            int i;
            cin>>i;
            try{
                if(i>=n||i<0){
                    throw i;
                }
                else{
                    cout<<"Value at "<<i<<" index is "<<arr[i]<<endl;
                }
            }
            catch(int x){
                cout<<x<<" is out of index range "<<endl;
            }
            
        }
    }
    return 0;
}