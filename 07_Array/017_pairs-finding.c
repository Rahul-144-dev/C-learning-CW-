//* Ques : Find the total number of pairs in the Array whose sum is equal to the given value x.
#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    printf("enter number : ");
    scanf("%d", &x);
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int pair = 0;
    for (int i = 0; i <= 7; i++)
    {
        for (int j = i + 1; j <= 7; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                pair++;
                printf("pair of (%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("pair : %d", pair);
    return 0;
}