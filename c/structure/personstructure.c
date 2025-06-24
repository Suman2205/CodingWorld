#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        char name[50];
        int age;
        int salary;
        char tier;
    }a,b;
    gets(a.name);
    scanf("%d",&a.age);
    scanf("%d",&a.salary);
    gets(b.name);
    scanf("%d",&b.age);
    scanf("%d",&b.salary);
    printf("Name of person:%s\n",a.name);
    printf("Age:%d\n",a.age);
    printf("Salary:%d\n",a.salary);
    printf("Name of person:%s\n",b.name);
    printf("Age:%d\n",b.age);
    printf("Salary:%d\n",b.salary);
    return 0;
}

 