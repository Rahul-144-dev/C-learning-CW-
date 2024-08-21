//* Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
#include <stdio.h>
#include <math.h>
int main()
{
   int arr[7] = {1, 2, 3, 4, 5, 6, 7};
   int sum_even = 0; // 1 + 3 + 5 + 7 = 16
   int sum_odd = 0;  // 2 + 4 + 6 12
   for (int i = 0; i <= 6; i++)
   {
      if (i % 2 == 0)
         sum_even += arr[i];
      else
         sum_odd += arr[i];
   }
   int diff = sum_even - sum_odd; // 16-12=4
   printf("\ndiffrence = %d", diff);
   return 0;
}