#include<stdio.h>
#include<string.h>
int main(){
    char a[50],b[50];
    printf("Enter the string:\n");
    scanf("%s",a);
    gets(0);
    strcpy(b,a);
    strrev(a);
    printf("%s",a);
    return 0;
}