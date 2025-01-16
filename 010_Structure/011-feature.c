#include <stdio.h>
#include <string.h>
/* Structure */
typedef struct pokemon
{
  int hp;
  int speed;
  int attack;
  char tier;
  char name[20];
} pokemon;
/* User Defined Function */
void print_struct(pokemon x);
/* Main Function */
int main()
{

  pokemon a, b, c;
  a.attack = 100;
  a.hp = 100;
  a.speed = 90;
  a.tier = 'A';
  strcpy(a.name, "Pikachu");
  /* to store all attributes to another struct */
  /* Method 1 */
  b.attack = a.attack;
  b.hp = a.hp;
  b.speed = a.speed;
  b.tier = a.tier;
  /* Method 2 */
  b = a; // Deep Copy Of a Structure
  strcpy(b.name, "Charizard");
  c = a;
  print_struct(b);
  return 0;
}
void print_struct(pokemon x)
{
  printf("%d\n", x.attack);
  printf("%d\n", x.hp);
  printf("%d\n", x.speed);
  printf("%c\n", x.tier);
  printf("%s\n", x.name);
}