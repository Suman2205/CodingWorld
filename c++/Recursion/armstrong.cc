#include<iostream>
using namespace std;
int pow(int p, int q){
    if (q==0) return 1;
    if (q%2==0){
        int result=pow(p,q/2);
        return result*result;
    }
    else{
        int result=pow(p,(q-1)/2);
        return p*result*result;
    }
}
int arm(int  n, int d){
    if (n==0) return 0;
    return arm(n/10,d)+ pow(n%10,d);
}
int main(){
    int n;
    cout<<"Enter any number: ",cin>>n;
    int temp=n;
    int nod=0;
    while (temp>0)
    {
        nod++;
        temp/=10;
    }
    if (n==arm(n,nod))
    {
        cout<<n<<" is an armstrong number"<<endl;
    }
    else{
        cout<<n<<" is not an armstrong number"<<endl;
    }
    return 0;
}