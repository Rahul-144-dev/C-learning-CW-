#include <stdio.h>
#include <math.h>
int main()
{
   int x, pair = 0;
   printf("enter number : ");
   scanf("%d", &x);
   int n = 8;
   // printf("enter arr number : ");
   // scanf("%d", &n);
   // int arr[n];
   int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
   // for (int i = 0; i < n; i++)
   // {
   //    printf("enter arr[%d] : ", i);
   //    scanf("%d", &arr[i]);
   // }
   for (int i = 0; i < n; i++)
   {
      for (int j = i + 1; j < n; j++)
      {
         for (int k = j + 1; k < n; k++)
         {
            if (arr[i] + arr[j] + arr[k] == x)
            {
               pair++;
               printf("(%d,%d,%d)\n", arr[i], arr[j], arr[k]);
            }
         }
      }
   }
   printf("pair = %d", pair);
   return 0;
}