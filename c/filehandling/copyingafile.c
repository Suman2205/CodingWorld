#include<stdio.h>
int main(){
    FILE* ptr=fopen("text.txt","r");
    FILE* ctr=fopen("suman.txt","w");
    char ch;
    while (1)
    {
        ch=fgetc(ptr);
        if (ch==EOF)
        {
            break;
        }
        else fputc(ch,ctr);
    }
    fclose(ptr);
    fclose(ctr);
    return 0;
}