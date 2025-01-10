#include <stdio.h>
/* Main Function */
int main()
{
  struct pokemon
  { // user defined datatype
    int hp;
    int speed;
    int attack;
    char tier; // G,S,A,B,C,D
  } pikachu, charizard, Mewtwo;

  // struct pokemon pikachu;
  pikachu.hp = 20;
  pikachu.attack = 50;
  pikachu.speed = 100;
  pikachu.tier = 'A';
  // struct pokemon charizard;
  charizard.hp = 50;
  charizard.attack = 100;
  charizard.speed = 200;
  charizard.tier = 'S';

  // struct pokemon Mewtwo;
  Mewtwo.hp = 500;
  Mewtwo.attack = 1000;
  Mewtwo.speed = 400;
  Mewtwo.tier = 'G';

  // printf("%d", Mewtwo.attack);
  return 0;
}