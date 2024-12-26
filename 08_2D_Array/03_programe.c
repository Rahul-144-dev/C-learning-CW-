// Ques : Write a program to store roll number and
// marks obtained by 4 students side by side in a
// matrix.
int st_no, sub;
// Global Variable
#include <stdio.h>
void input_st_no(int *no, int *sub);
void inpt(int st_arr[][sub]);
void prt(int st_arr[][sub]);
void main()
{
  input_st_no(&st_no, &sub);
  int st_arr[st_no][sub];
  inpt(st_arr);
  prt(st_arr);
}
void input_st_no(int *no, int *sub)
{
  printf("Enter Number of Students : ");
  scanf("%d", no);
  printf("Enter Number of Subjects : ");
  scanf("%d", sub);
}
void inpt(int st_arr[][sub])
{
  for (int i = 0; i < st_no; i++)
  {
    printf("\n");
    for (int j = 0; j < sub; j++)
    {
      printf("st %d : ", i + 1);
      printf("sub %d : ", j + 1);
      scanf("%d", &st_arr[i][j]);
    }
  }
}
void prt(int st_arr[][sub])
{
  for (int i = 0; i < st_no; i++)
  {
    printf("Student %d : ", i + 1);
    for (int j = 0; j < sub; j++)
    {
      printf("%d ", st_arr[i][j]);
    }
    printf("\n");
  }
}