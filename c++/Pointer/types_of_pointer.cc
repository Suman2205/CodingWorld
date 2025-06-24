#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;
    int c=30;
    int *ptr1;
    cout<<ptr1<<" "<<*ptr1<<endl;     // Wild pointer, this pointer stores random address and point random value
    int *ptr2=NULL;
    int *ptr3=0;
    int *ptr4='\0';
    cout<<ptr2<<" "<<&ptr2<<endl;          // We cannot derefrence a null pointer, its gives a run time error
    cout<<ptr3<<" "<<&ptr3<<endl;
    cout<<ptr4<<" "<<&ptr4<<endl;
    int *ptr=NULL;
    {
        int x=10;
        ptr=&x;                           // This is a dangling pointer
        cout<<ptr<<endl;
    }
    cout<<ptr<<endl;
    float f=7.2;
    int x=10;
    void *ptr5=&f;                           //This is a void pointer
    // ptr5=&x;
    float *floatpointer=(float *)ptr5;              //By use of type casting we use void pointer for dereferencing
    cout<<floatpointer<<" "<<*floatpointer<<endl;
    ptr5=&x;
    int *integerpointer=(int *)ptr5;
    cout<<integerpointer<<" "<<*integerpointer<<endl;
    return 0;
}