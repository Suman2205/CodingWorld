#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    puts("Enter a string:");
    gets(str);
    int i=0;
    int l=0;
    int lines=0;
    while (str[i]!='\0')
    {
      l++;
      i++;
    }
    int w=1;
    for (int i = 0; i <l; i++)
    {
      if (str[i]==' ')
      {
        w++;
      }
      if (str[i]=='\n')
      {
        lines++;
      }
    }
    printf("The no. of characters used in string are %d\n",l);
    printf("The no. of words used in string are %d\n",w);
    printf("The no. of lines used in string are %d\n",lines);
    return 0;
}