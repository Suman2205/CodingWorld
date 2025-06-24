#include<stdio.h>
int main(){
    FILE* ptr=fopen("text.txt","r");
    int nol=1,now=1,noc=0;
    char ch;
    while (1)
    {
        ch=fgetc(ptr);
        if (ch==EOF)
        {
            break;
        }
        if (ch!='\0'&&ch!='\n')
        {
            noc++;
        }
        
        if (ch==' ')
        {
            now++;
        }
        if (ch=='\n')
        {
            nol++;
            now++;
        }   
    }
    fclose(ptr);
    printf("no. of characters:%d\n",noc);
    printf("no. of words:%d\n",now);
    printf("no. of lines:%d",nol);
    return 0;
}