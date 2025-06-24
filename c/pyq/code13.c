#include<stdio.h>
#include<string.h>
int main(){
    FILE *ptr=fopen("rough.txt","w");
    char str[100];
    gets(str);
    strlwr(str);
    fputs(str,ptr);
    fclose(ptr);
    FILE *ptr1=fopen("rough.txt","r");
    char c;
    int vowel=0;
    int conosonant=0;
    int space=0;
    int size=0;
    while ((c=fgetc(ptr1))!=EOF)
    {
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        {
            vowel++;
        }
        else if (c!=' ')
        {
            conosonant++;
        }
    }
    printf("No. of vowel is %d\n",vowel);
    printf("No. of consonant is %d",conosonant);
    fclose(ptr1);
    return 0;
}
