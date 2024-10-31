#include <stdio.h>
void eng()
{
  printf("we are in eng\n"); // 6
  return;                    // 7
}
void austra()
{
  printf("we are in austra\n"); // 4
  eng();                        // 5 // calling eng
  return;                       // 8
}
void india()
{
  printf("we are in india\n"); // 2
  austra();                    // 3 // calling austra
  return;                      // 9
}
int main()
{
  india();  // calling india // 1
  return 0; // 10
}