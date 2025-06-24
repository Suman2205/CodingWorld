#include<stdio.h>
#include<string.h>
int main(){
    typedef struct Pokemon{
        int attack;
        int hp;
        int speed;
        char tier;
        char name[50];
    }pokemon;
    pokemon a,b;
    a.attack=100;
    a.hp=120;
    a.speed=130;
    a.tier='A';
    strcpy(a.name,"pikachu");
    b=a;
    printf("%d\n",b.attack);
    printf("%d\n",b.hp);
    printf("%d\n",b.speed);
    printf("%c\n",b.tier);
    printf("%s",b.name);
}