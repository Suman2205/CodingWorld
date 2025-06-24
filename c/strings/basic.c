#include<stdio.h>
int main(){
    char str[5]={'h','e','l','l','o'};
    printf("%c ",str[2]);
    for (int i = 0; i < 5; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
    char str2[]="hello world";
    int j=0;
    while (str2[j]!='\0')
    {
        printf("%c",str2[j]);
        j++;
    }
    printf("\n");
    return 0;
}
