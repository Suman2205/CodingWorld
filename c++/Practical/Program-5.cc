#include<iostream>
#include<cmath>
using namespace std;
class DB;
class DM{
    int metre;
    int cm;
    public:
    DM(int a,int b){
        metre=a;
        cm=b;
    }
    friend DM add(DM&,DB&);
    void display(){
        cout<<metre<<"m "<<cm<<"cm"<<endl;
    }
    friend DM addInm(DM&,DB&);
    friend DB addInft(DM&,DB&);
};
class DB{
    int feet;
    int inch;
    public:
    float dist;
    DB(int a,int b){
        feet=a;
        inch=b;
    }
    void display(){
        cout<<feet<<"ft "<<inch<<"inch"<<endl;
    }
    friend DM addInm(DM&,DB&);
    friend DB addInft(DM&,DB&);
};
DM addInm(DM&t1,DB&t2){
    int metre;
    int cm;
    double cmtom=t1.cm*0.01;
    double ftTom=t2.feet*0.305;
    double inchTom=t2.inch*0.0254;
    double totalMetre=t1.metre+cmtom+ftTom+inchTom;
    totalMetre=ceil(totalMetre*100)/100;
    metre=int(totalMetre);
    cm=(totalMetre-metre)*100;
    return DM(metre,cm);
}
DB addInft(DM&t1,DB&t2){
    int feet;
    int inch;
    double mtoft=t1.metre*3.281;
    double cmtoft=t1.cm*0.0328;
    double inchtoft=t2.inch*0.084;
    double totalft=t2.feet+mtoft+cmtoft+inchtoft;
    totalft=ceil(totalft*100)/100;
    feet=int(totalft);
    inch=(totalft-feet)*12;
    return DB(feet,inch);
}
int main(){
    int a,b,c,d;
    cout<<"Enter distance in Xm Ycm: ";
    cin>>a>>b;
    cout<<"Enter distance in Xfeet Yinch: ";
    cin>>c>>d;
    DM dm1(a,b);
    DB dm2(c,d);
    char q;
    cout<<"In which unit you want your addition result(M for metre and cm,F for feet and inch): ";
    cin>>q;
    if (q=='M')
    {
        DM res=addInm(dm1,dm2);
        cout<<"Total distance(in m and cm) is ";
        res.display();
    }
    if(q=='F'){
        DB res=addInft(dm1,dm2);
        cout<<"Total distance(in ft and inch) is  ";
        res.display();
    }
    return 0;
}