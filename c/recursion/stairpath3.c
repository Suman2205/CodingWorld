#include<stdio.h>
int stair(int n){
    if(n<=2)return n;
    if(n==3)return 4;
    int totalways=stair(n-1)+stair(n-2)+stair(n-3);
    return totalways;
}
int main(){
    int n; 
    printf( "enter n:");
    scanf("%d",&n);
    int totalways= stair(n);
    printf("%d",totalways);
    return 0;
} 