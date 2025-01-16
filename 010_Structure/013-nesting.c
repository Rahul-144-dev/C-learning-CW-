/* Header Files */
#include <stdio.h>
#include <string.h>
/* Global Variables */
/* Structure */
typedef struct basic_pokemon
{
  int hp;
  int attack;
  int speed;
  char tier;
  char name[20];
} basic;

typedef struct lengendary_pokemon
{
  basic basic;
  char ability[20];
} lengendary;

typedef struct god_pokemon
{
  char ability[20];
} godlvl;

typedef struct pokemon
{
  basic basic;
  lengendary special;
  godlvl god;
} pokemon;

/* Function Declaration */

/* Main Function */
int main()
{
  pokemon arcues;
  {
    strcpy(arcues.special.ability, "Turns into Stones");
  }
  return 0;
}
/* Function Definition */