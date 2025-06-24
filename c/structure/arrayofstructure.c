#include<stdio.h>
#include<string.h>
int main(){
    typedef struct Pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[50];
    } pokemon;
    pokemon arr[3];
    for (int i = 0; i < 3; i++)
    {
        printf("enter hp:");
        scanf("%d",&arr[i].hp);
        printf("enter speed:");
        scanf("%d",&arr[i].speed);
        printf("enter attack:");
        scanf("%d",&arr[i].attack);
        printf("enter tier:");
        scanf("%c",&arr[i].tier);
        printf("enter name:");
        scanf("%s",arr[i].name);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Name:%s\n",arr[i].name);
        printf("HP:%d\n",arr[i].hp);
        printf("Speed:%d\n",arr[i].speed);
        printf("Attack:%d\n",arr[i].attack);
        printf("Tier:%c\n",arr[i].tier);
    }
    return 0;
}