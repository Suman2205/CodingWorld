#include<stdio.h>
#include<string.h>
int main(){
char str[100];
puts("Enter a string:");
gets(str);
int l=0;
int i=0;
while (str[i]!='\0')
{
    l++;
    i++;
}
int p;
printf("Enter index no at which you want to insert:");
scanf("%d",&p);
for (int j = l; j >=p; j--)
{
    str[i+1]=str[i];
}
str[p]='k';
printf("%s",str);
return 0;
}