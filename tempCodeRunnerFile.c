#include <stdio.h>
#include <stdlib.h>

int m, n, p, q;

void get_dimension(int *m, int *n, int *p, int *q);
void print_array(int **res, int r, int c);
void matrix_multiply(int **arr, int **brr, int **res, int r, int c, int cr);

int main()
{
  get_dimension(&m, &n, &p, &q);
  printf("%d %d %d %d\n", m, n, p, q);
  if (n != p)
  {
    printf("The matrices cannot be multiplied");
    return 0;
  }
  // Allocate memory for the arrays
  int **arr = (int **)malloc(m * sizeof(int *));
  for (int i = 0; i < m; i++)
    arr[i] = (int *)malloc(n * sizeof(int));

  int **brr = (int **)malloc(p * sizeof(int *));
  for (int i = 0; i < p; i++)
    brr[i] = (int *)malloc(q * sizeof(int));

  int **res = (int **)malloc(m * sizeof(int *));
  for (int i = 0; i < m; i++)
    res[i] = (int *)malloc(q * sizeof(int));

  // Initialize arr and brr with some values
  for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
      arr[i][j] = i * n + j + 1;

  for (int i = 0; i < p; i++)
    for (int j = 0; j < q; j++)
      brr[i][j] = i * q + j + 1;

  int cr = n; // arr[][c] & brr[][r]
  matrix_multiply(arr, brr, res, m, q, cr);
  print_array(res, m, q);

  // Free allocated memory
  for (int i = 0; i < m; i++)
    free(arr[i]);
  free(arr);

  for (int i = 0; i < p; i++)
    free(brr[i]);
  free(brr);

  for (int i = 0; i < m; i++)
    free(res[i]);
  free(res);

  return 0;
}

void get_dimension(int *m, int *n, int *p, int *q)
{
  // 1st matrix
  printf("row of 1st matrix : ");
  scanf("%d", m);
  printf("column of 1st matrix : ");
  scanf("%d", n);
  // 2nd matrix
  printf("row of 2nd matrix : ");
  scanf("%d", p);
  printf("column of 2nd matrix : ");
  scanf("%d", q);
}

void matrix_multiply(int **arr, int **brr, int **res, int r, int c, int cr)
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      res[i][j] = 0;
      for (int k = 0; k < cr; k++)
      {
        res[i][j] += arr[i][k] * brr[k][j];
      }
    }
  }
}

void print_array(int **res, int r, int c)
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("%d ", res[i][j]);
    }
    printf("\n");
  }
}