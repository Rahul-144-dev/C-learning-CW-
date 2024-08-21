//* "Ques : Find the second largest element in the given Array.
#include <stdio.h>
#include <math.h>
#include <limits.h>
int main()
{
    // int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr[8] = {1, 3, 2, 5, 4, 3, 2, 1};
    int max = INT_MIN;
    int s_max = INT_MIN;
    for (int i = 0; i <= 7; i++)
    {
        if (max < arr[i])
        {
            s_max = max;
            max = arr[i];
        }
        else if (s_max < arr[i])
        {
            s_max = arr[i];
        }
    }
    printf("max=%d\n", s_max);
    return 0;
    // for (int i = 0; i <= 7; i++)
    // {
    //     if (s_max < arr[i] & arr[i] != max)
    //         s_max = arr[i];
    // }
}