#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        int noofpages;
        float price;
    } a,b;
    strcpy(a.name,"Secret Seven");
    a.noofpages=400;
    a.price=135.75;
    strcpy(b.name,"Famous Five");
    b.noofpages=500;
    b.price=155.75;
    printf("%s\n",a.name);
    printf("%d\n",a.noofpages);
    printf("%f\n",a.price);
    printf("%s\n",b.name);
    printf("%d\n",b.noofpages);
    printf("%f\n",b.price);
    return 0;
}