#include <stdio.h>
#include <string.h>
/* declaration of structure datatype */
typedef struct pokemon
{
  int hp;
  int speed;
  int attack;
  char tier;
  char name[20];
} pokemon;
/* User Defined Functions */
void print(pokemon arr[]);
/* Main Function */
int main()
{
  pokemon arr[3]; // arr[0],arr[1],arr[2]
  {
    arr[0].attack = 50;
    arr[0].hp = 100;
    arr[0].speed = 30;
    arr[0].tier = 'A';
    strcpy(arr[0].name, "Charizard");
  }
  {
    arr[1].attack = 150;
    arr[1].hp = 100;
    arr[1].speed = 130;
    arr[1].tier = 'S';
    strcpy(arr[1].name, "Mewtwo");
  }
  {
    arr[2].attack = 50;
    arr[2].hp = 30;
    arr[2].speed = 80;
    arr[2].tier = 'B';
    strcpy(arr[2].name, "Pikachu");
  }
  print(arr);
  return 0;
}
void print(pokemon arr[])
{
  for (int i = 0; i < 3; i++)
  {
    printf("Name : %s\n", arr[i].name);
    printf("Tier : %c\n", arr[i].tier);
    printf("Hp : %d\n", arr[i].hp);
    printf("Attack : %d\n", arr[i].attack);
    printf("Speed : %d\n", arr[i].speed);
    puts("");
  }
}