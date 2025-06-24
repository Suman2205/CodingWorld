#include<stdio.h>
#include<stdlib.h>
typedef struct vector{
    int capacity;
    int size;
    int* arr;
}vector;
void implement(vector* v){
    v->capacity=1;
    v->size=0;
    v->arr=(int*)malloc(v->capacity*sizeof(int));
    return;
}
void push(vector* v,int data){
    if (v->size==v->capacity)
    {
        v->capacity*=2;
        int *arr2=(int*)malloc(v->capacity*sizeof(int));
        for (int i = 0; i <v->capacity; i++)
        {
            arr2[i]=v->arr[i];
        }
        v->arr=arr2;
    }
    v->arr[v->size++]=data;
}
void print(vector* v){
    for (int i = 0; i <v->size; i++)
    {
        printf("%d ",v->arr[i]);
    }
    
}
int main(){
    vector* v=(vector*)malloc(sizeof(vector));
    implement(v);
    push(v,1);
    printf("%d\n",v->size);
    printf("%d\n",v->capacity);
    push(v,2);
    printf("%d\n",v->size);
    printf("%d\n",v->capacity);
    push(v,3);
    printf("%d\n",v->size);
    printf("%d\n",v->capacity);
    push(v,4);
    printf("%d\n",v->size);
    printf("%d\n",v->capacity);
    push(v,5);
    printf("%d\n",v->size);
    printf("%d\n",v->capacity);
    print(v);
    return 0;
}