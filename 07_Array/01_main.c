#include <stdio.h>
int main()
{
  /* int array */
  // int arr[5] = {2, 3, 4, 6, 9};
  // arr[3] = 19;
  // arr[2] = 1;
  // printf("%d", arr[4]);

  // /* float array */
  // float frr[3] = {8, 3, 5};
  // printf("%f", frr[2]);

  // /* char array */
  // char crr[5] = {'A', 'g', 'r', '&', '%'};
  // printf("%c", crr[3]);

  /* taking input from user */
  int arr[3];
  puts("Enter elements of the array");
  /* taking input from the user for elements of the array using for loop */
  for (int i = 0; i < 3; i++)
  {
    printf("Enter arr[%d] : ", i);
    scanf("%d", &arr[i]);
  }
  /* print the elements of the array using for loop */
  puts("The elements of the array : ");
  for (int i = 0; i < 3; i++)
  {
    printf("arr[%d] = %d\n", i, arr[i]);
  }

  /* print the elements of the array using while loop */
  // int i = 0;
  // while (i < 3)
  // {
  //   printf("arr[%d] = %d\n", i, arr[i]);
  //   i++;
  // }
  // return 0;
}