/* Header Files */
#include <stdio.h>
#include <string.h>
/* Global Variables */
/* Structure */
typedef struct bolts
{
  int no;
} bolt;
typedef struct engine
{
  bolt bolt;
} engine;
typedef struct car
{
  engine engine;
} car;

/* Function Declaration */

/* Main Function */
int main()
{
  car maruti;
  {
    maruti.engine.bolt.no = 10;
  }
  return 0;
}
/* Function Definition */