#include<stdio.h>
int stair(int n){
    if(n<=2)return n;
    int totalways=stair(n-1)+stair(n-2);
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