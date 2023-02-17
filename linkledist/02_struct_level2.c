#include <stdio.h>
#include <string.h>
struct GamePlayer__
{
    char name[20];
    int maxHp;
    int hp;
};
typedef struct GamePlayer__ GamePlayer;
// tip: typedef [data type] [variable]
void printfGamePlayer(GamePlayer player)
{
    printf("Name: %s\n", player.name);
    printf("HP: %d/%d", player.hp, player.maxHp);
}
// takeDamage(GamePlayer *player, int 100)
void takeDamage(GamePlayer *player, int damage)
{
    // (*player).hp -= damage;
    player->hp -= damage;
    if(player->hp < 0){
        player->hp = 0;
    }
}
int main()
{
    GamePlayer player1;
    strcpy(player1.name, "Tatpong");
    player1.maxHp = 1000;
    player1.hp = 1000;
    int damage = 100;
    takeDamage(&player1, 100);
    takeDamage(&player1, 999);
    printfGamePlayer(player1);
    return 0;
}