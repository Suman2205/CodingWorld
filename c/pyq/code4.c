#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,j;
    puts("Enter a string:");
    gets(str);
    puts("The reverse of entered string is:");
    int size=0;
    int k=0;
    while (str[k]!='\0')
    {
        size++;
        k++;
    }
    for (i =0,j=size-1; i <j; i++,j--)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts(str);
    return 0;
}