#include <stdio.h>
#include <string.h>
struct GamePlayer__
{
    char name[20];
    int maxHp;
    int hp;
};
typedef struct GamePlayer__ GamePlayer;
// typedef struct GamePlayer__* GamePlayerPtr;
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
    if (player->hp < 0)
    {
        player->hp = 0;
    }
}

void findTopGamePlayerMaxHP(GamePlayer players[], int size, GamePlayer **topMaxHp) // GamePlayerPtr *topMaxHp
{
    *topMaxHp = &players[0];
    for (int i = 0; i < size; i++)
    {
        if (players[i].maxHp > (*topMaxHp)->maxHp)
        {
            *topMaxHp = &players[i];
        }
    }
}
int main()
{
    int size = 4;
    GamePlayer players[10], *topMaxHp;
    strcpy(players[0].name, "Kittikun");
    strcpy(players[1].name, "Maryne");
    strcpy(players[2].name, "Lunaryne");
    strcpy(players[3].name, "Noah");

    players[0].maxHp = 100;
    players[1].maxHp = 1000;
    players[2].maxHp = 1001;
    players[3].maxHp = 500;

    for (int i = 0; i < size; ++i)
    {
        players[i].hp = players[i].maxHp;
    }
    findTopGamePlayerMaxHP(players, size, &topMaxHp);

    printfGamePlayer(*topMaxHp);
    return 0;
}