#include<stdio.h>
int main(){
    char str1[100],str2[100];
    gets(str1);
    gets(str2);
    int i=0;
    int j=0;
    int size1=0;
    int size2=0;
    while (str1[i]!='\0')
    {
        size1++;
        i++;
    }
    while (str2[j]!='\0')
    {
        size2++;
        j++;
    }
    str1[size1+size2];
    for (int i = 0; i < size2; i++)
    {
        str1[i+size1]=str2[i];
    }
    puts(str1);
    for (int i = 0; i <size1+size2; i++)
    {
        printf("%c",str1[i]);
    }
    return 0;
}