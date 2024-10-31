#include <stdio.h>
int main()
{
  int num_of_lines, num_of_stars;
  printf("enter number of lines : ");
  scanf("%d", &num_of_lines);
  printf("enter number of stars: ");
  scanf("%d", &num_of_stars);
  for (int i = 1; i <= num_of_lines; i++) // outer loop last execute n times
  {
    for (int i = 1; i <= num_of_stars; i++) // inner loop first execute n times
    {
      printf("x ");
    }
    printf("\n");
  }
  return 0;
}