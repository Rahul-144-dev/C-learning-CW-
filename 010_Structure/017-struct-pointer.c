
/* Header Files */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/* Global Declaration */
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
void print(pokemon pikachu);
void change(pokemon *p);
/* Main Function */
int main()
{
  pokemon pikachu = {60, 70, 100, 'A', "Pikachu"};
  // pikachu.hp = 60;
  // pikachu.attack = 70;
  // pikachu.speed = 100;
  // pikachu.tier = 'A';
  // strcpy(pikachu.name, "Pikachu");
  pokemon *x = &pikachu;
  print(pikachu);
  change(&pikachu);
  print(pikachu);
  return 0;
}
/* Function Definition */
void change(pokemon *ptr)
{
  ptr->hp = 70;
  ptr->attack = 80;
  ptr->speed = 110;
  ptr->tier = 'S';
  strcpy(ptr->name, "Raichu");
  return;
}
void print(pokemon pika)
{
  printf("hp : %d\n", pika.hp);
  printf("attack : %d\n", pika.attack);
  printf("speed : %d\n", pika.speed);
  printf("tier : %c\n", pika.tier);
  printf("name : %s\n", pika.name);
  puts("");
  return;
}