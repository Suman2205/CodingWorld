#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<limits.h>
typedef struct Stack{
    int capacity;
    int* arr;
    int top;
}Stack;
void implement(Stack* s,int c){
    s->capacity=c;
    s->arr=(int*)malloc(s->capacity*sizeof(int));
    s->top=-1;
    
}
void push(Stack* s,int data){
        if (s->top==s->capacity-1)
        {
            printf("Overflow\n");
            return;
        }
        s->top++;
        s->arr[s->top]=data;
    }
int pop(Stack* s){
    if (s->top==-1)
    {
        printf("Underflow\n");
        return -1;
    }
    s->top--;
}
bool isEmpty(Stack*s){
    return s->top==-1;
}
bool isFull(Stack*s){
    return s->top==s->capacity-1;
}
int getTop(Stack*s){
    return s->arr[s->top];
}
int size(Stack*s){
    return s->top+1;
}
int main(){
    Stack* s=(Stack*)malloc(sizeof(Stack));
    implement(s,5);
    push(s,1);
    push(s,2);
    push(s,3);
    push(s,4);
    push(s,5);
    while (!isEmpty(s))
    {
        printf("%d\n",getTop(s));
        pop(s);
    }
    return 0;
}