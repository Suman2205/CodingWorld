#include<stdio.h>
#include<string.h>
int main(){
   char str1[]="Hello";
    char str2[]="World";
    int i=0;
    int j=0;
    int length1=0;
    int length2=0;
    while (str1[i]!='\0')
    {
        length1++;
        i++;
    }
    while (str2[j]!='\0')
    {
        length2++;
        j++;
    }
    char str[length1+length2];
    for (int k = 0; k <length1+length2; k++)
    {
        if (k<length1)
        {
            str[k]=str1[k];
        }
        else
        {
            str[k]=str2[k-length1];
        }
    }
    for (int i = 0; i < length1+length2; i++)
    {
        printf("%c",str[i]);
    }
    
    return 0;
}