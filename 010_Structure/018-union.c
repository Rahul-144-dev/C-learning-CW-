/* Header Files */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/* Global Declaration */
/* Structure */
typedef union pokemon
{
  int hp;
  int attack;
  int speed;
  char tier;
  char name[20];
} pokemon;

/* Function Declaration */
/* Main Function */
int main()
{
  pokemon pikachu;
  {
    pikachu.hp = 60;
    pikachu.attack = 70;
    pikachu.speed = 100;
    pikachu.tier = 'A';
    strcpy(pikachu.name, "Pikachu");
  }
  printf("hp : %d\n", pikachu.hp);
  printf("attack : %d\n", pikachu.attack);
  printf("speed : %d\n", pikachu.speed);
  printf("tier : %c\n", pikachu.tier);
  printf("name : %s\n", pikachu.name);
  return 0;
}
/* Function Definition */
