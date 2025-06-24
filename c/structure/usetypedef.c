#include<stdio.h>
#include<string.h>
int main(){
    typedef struct Pokemon{
        char name[50];
        int hp;
        int speed;
        int attack;
        char tier;
    } pokemon;
    //struct pokemon pikachu;
    pokemon pikachu;
    strcpy(pikachu.name,"Pikachu");
    pikachu.hp =70;
    pikachu.speed=140;
    pikachu.attack=100;
    pikachu.tier='A';
    printf("%s\n",pikachu.name);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    printf("%d\n",pikachu.attack);
    printf("%c",pikachu.tier);
    return 0;
}