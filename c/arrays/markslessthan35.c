#include<stdio.h>
int main(){
    int marks[8]={55,82,78,32,15,27,89,91};
    for (int i = 0; i<8; i++)
    {
        if (marks[i]<35)
        {
           printf(" %d ",i);
        }
        
    }
    return 0;
    
}