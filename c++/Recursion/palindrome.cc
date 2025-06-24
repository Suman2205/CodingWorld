#include<iostream>
using namespace std;
bool f(int num, int *temp){
    if (num>=0 and num<=9)
    {
       int lastdigitofTemp=(*temp)%10;
       (*temp)/=10;
       return(num==lastdigitofTemp);
    }
    bool result=(f(num/10,temp) and (num%10)==((*temp)%10));
    (*temp)/=10;
    return result;
}
int main(){
    int num;
    cout<<"Enter any number: ",cin>>num;
    int anotherNum=num;
    int *temp=&anotherNum;
    if (f(num,temp)==1)
    {
        cout<<"The entered number is palindrome";
    }
    else{
        cout<<"The entered number is not palindrome";
    }
    return 0;
}