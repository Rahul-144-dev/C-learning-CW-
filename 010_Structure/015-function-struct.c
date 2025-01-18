/* Header Files */
#include <stdio.h>
#include <string.h>
/* Global Variables */
/* Structure */
typedef struct pokemon
{
  int hp;
  int attack;
  int speed;
  char tier;
  char name[20];
} pokemon;
/* Function Declaration */
void change(pokemon p);
void printing(pokemon p);
/* Main Function */
int main()
{
  pokemon pikachu;
  {
    pikachu.hp = 60;
    pikachu.attack = 50;
    pikachu.speed = 100;
  }
  change(pikachu);
  printing(pikachu);
  return 0;
}
/* Function Definition */
void change(pokemon p)
{
  p.hp = 70;
  p.attack = 60;
  p.speed = 110;
  return;
}
void printing(pokemon p)
{
  printf("%d\n", p.hp);
  printf("%d\n", p.attack);
  printf("%d\n", p.speed);
  return;
}