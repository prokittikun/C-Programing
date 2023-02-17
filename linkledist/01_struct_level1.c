#include <stdio.h>
#include <string.h>
struct GamePlayer {
    char name[20];
    int maxHp;
    int hp;
};

int main(){
    struct GamePlayer player1;
    strcpy(player1.name, "Tatpong");
    player1.maxHp = 1000;
    player1.hp = 1000;

    printf("Name: %s\n", player1.name);
    printf("HP: %d/%d", player1.hp, player1.maxHp);
    return 0;
}