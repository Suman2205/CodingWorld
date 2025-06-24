#include<stdio.h>
#include<string.h>
int main(){
    char line[80],ctr;
    int i,c,end=0,characters=0,words=0,lines=0,ch=0;
    printf("Type any text.\n");
    printf("Give one space after each word.\n");
    while (end==0)
    {
        c=0;
        while ((ctr=getchar())!='\n'){
        line[c++]=ctr;
        ch++;
        }
        line[c]='\0';
        if (line[0]=='\0'){
        break;
        }
        words++;
        for ( i = 0; line[i]!='\0'; i++){
        if (line[i]==' '|| line[i]=='\t'){
        words++;}
        }
        lines= lines+1;
        characters=characters+strlen(line);
    }
    puts(line);
    printf("\n");
    printf("Number of lines = %d\n",lines);
    printf("Number of words = %d\n",words);
    printf("Number of characters = %d\n",ch);
    return 0;
}