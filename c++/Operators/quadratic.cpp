#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a,b,c;
    cout<<"The quadratic equation are ax^2+bx+c"<<endl;
    cout<<"Enter values of a,b,c: ",cin>>a,cin>>b,cin>>c;
    float d=(b*b)-4*a*c;
    float r1,r2;
    if(d==0){
        r1=-b/(2*a);
        r2=-b/(2*a);
        cout<<"The roots are real and equal"<<endl;
        cout<<"The values of roots are "<<r1 <<"and "<<r2;
    }
    else if (d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        cout<<"The roots are real"<<endl;
        cout<<"The values of roots are"<<r1,"and",r2;
    }
    else{
        cout<<"The roots are imaginary";
    }
    return 0;
}