#include<stdio.h>
#include<string.h>
int main(){
    typedef struct Pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];
    }pokemon;
    typedef struct LegendaryPokemon{
        pokemon normal;
        char ability[10];
    }legendarypokemon;
    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"Pressure");
    mewtwo.normal.attack=1000;
    mewtwo.normal.hp=1200;
    mewtwo.normal.speed=1300;
    mewtwo.normal.tier='S';
    strcpy(mewtwo.normal.name,"Mewtwo");
    printf("%s\n",mewtwo.ability);
    printf("%d\n",mewtwo.normal.attack);
    printf("%d\n",mewtwo.normal.hp);
    printf("%d\n",mewtwo.normal.speed);
    printf("%c\n",mewtwo.normal.tier);
    printf("%s\n",mewtwo.normal.name);
    return 0;
}