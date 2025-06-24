#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Hello Neha";
    //printf("%s\n",str);
    puts(str);
    char str2[40];
    //scanf("%[^\n]s",str2);
    gets(str2);
    puts(str2);
    return 0;
}