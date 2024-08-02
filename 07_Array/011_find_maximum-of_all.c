//* Find the maximum value out of all the elements in the array.
#include <stdio.h>
#include <math.h>
#include <limits.h>
int main()
{
    int arr[6] = {13, 21, 33, 42, 35, 63};
    // int max = INT_MIN;
    int max = arr[0];
    for (int i = 0; i <= 6 - 1; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    printf("%d ", max);
    return 0;
}