#include <stdio.h>
int m, n, p, q;
void get_dimension(int *m, int *n, int *p, int *q);
void array_elements(int arr[m][n], int brr[p][q]);
void matrix_multiply(int arr[m][n], int brr[p][q], int res[m][q]);
void print_array(int res[m][q]);
/* Main Function */
int main()
{
  do
  {
    get_dimension(&m, &n, &p, &q); // Prompt the user to enter dimensions
    if (n != p)
    {
      printf("The matrices cannot be multiplied....\nPlease Re-enter the dimensions again....\n");
    }
  } while (n != p); // Repeat the loop if the number of columns in the first matrix is not equal to the number of rows in the second matrix
  // Rest of the code...
  int arr[m][n];
  int brr[p][q];
  int res[m][q];
  array_elements(arr, brr);
  matrix_multiply(arr, brr, res);
  print_array(res);
  return 0;
}
void matrix_multiply(int arr[m][n], int brr[p][q], int res[m][q])
{
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < q; j++)
    {
      /*
          i row of a[r][] , j column of b[][c]
          (a[i][0],a[i][1],a[i][2]......) * (b[0][j],b[1][j],b[2][j],)
      */
      res[i][j] = 0;
      for (int k = 0; k < p; k++)
      {
        res[i][j] += arr[i][k] * brr[k][j];
      }
    }
  }
}
void array_elements(int arr[m][n], int brr[p][q])
{
  printf("Enter elements of 1st martix \n");
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
  printf("Enter elements of 2nd martix \n");
  for (int i = 0; i < p; i++)
  {
    for (int j = 0; j < q; j++)
    {
      scanf("%d", &brr[i][j]);
    }
  }
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
void print_array(int res[m][q])
{
  printf("the result of multiplication.....\n");
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < q; j++)
    {
      printf("%d ", res[i][j]);
    }
    printf("\n");
  }
}
