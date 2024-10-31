#include <stdio.h>
int main()
{
  int num_of_rows, num_of_columns;
  printf("enter number of rows : ");
  scanf("%d", &num_of_rows);
  printf("enter number of columns: ");
  scanf("%d", &num_of_columns);
  for (int i = 1; i <= num_of_rows; i++) // outer loop last execute n times
  {
    for (int i = 1; i <= num_of_columns; i++) // inner loop first execute n times
    {
      printf("x ");
    }
    printf("\n"); // nxt line for every iteration for the outer loop
  }
  return 0;
}