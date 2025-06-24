#include<stdio.h>
typedef struct vector
{
    int size;
    int capacity;
    int* arr;
}vector;
void add(vector v,int ele){
    v.arr[1];
    v.size=1;
    v.capacity=1;
    if (v.size==v.capacity)
    {
        v.capacity*=2;
        vector temp;
        temp.arr[v.capacity];
        for (int i = 0; i < v.size; i++)
        {
            temp.arr[i]=v.arr[i];
        }
        v.arr=temp.arr;
    }
    v.arr[v.size++]=ele;
}
void display(vector *x){
    for (int i = 0; i < x->size; i++)
    {
        printf("%d ",x->arr[i]);
    }
    
}
int main(){
    vector v;
    add(v,2);
    display(&v);
    return 0;
}