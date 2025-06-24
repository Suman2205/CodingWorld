#include<stdio.h>
#include<string.h>
    typedef struct pokemon{
        char name[50];
        int hp;
        int speed;
        int attack;
        char tier;
    } pokemon;
    void fun(pokemon p){
        printf("%d\n",p.hp);
    }
    void change(pokemon p){
        p.hp=60;
        printf("%d\n",p.hp);
    }
int main(){
    pokemon pikachu;
    strcpy(pikachu.name,"Pikachu");
    pikachu.hp =70;
    pikachu.speed=140;
    pikachu.attack=100;
    pikachu.tier='A';
    change(pikachu);
    fun(pikachu);
    printf("%s\n",pikachu.name);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    printf("%d\n",pikachu.attack);
    printf("%c",pikachu.tier);
    return 0;
}