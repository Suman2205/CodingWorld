#include<stdio.h>
#include<string.h>
int main(){
    char ch;
    char str[100];
    int nol=0 ,noc=0,now=1;
    int i=0;
    while (ch!='\n')
    {
        ch=getchar();
        str[i]=ch;
        i++;
        noc++;
    }
    for ( int j = 0; j<noc; j++)
    {
        if (str[j]==' ')
        {
            now++;
        }
        if (str[j]=='\n')
        {
            nol++;
        }
    }
    printf("no. of characters: %d\n",noc);
    printf("no. of words: %d\n",now);
    printf("no. of lines: %d\n",nol);
    return 0;
}