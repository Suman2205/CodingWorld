#include<stdio.h>
int main(){
    FILE *ptr=fopen("text.txt","r");
    char str1[100];
    while (fgets(str1,100,ptr)!=NULL)
    {
        printf("%s",str1);
    }
    fclose(ptr);
    FILE* ptr1=fopen("suman.txt","w");
    // char str[50];
    // printf("\n");
    // gets(str);
    fputs(str1,ptr1);
    fclose(ptr1);
    return 0;
}