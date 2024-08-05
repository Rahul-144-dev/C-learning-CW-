//* Ques : Count the number of elements in given array greater than a given number x.
#include <stdio.h>
#include <math.h>
int main()
{
    int x, count = 0;
    printf("enter number : ");
    scanf("%d", &x);
    int arr[7] = {1, 2, 3, 4, 5, 6, 4};
    for (int i = 0; i <= 6; i++)
    {
        if (arr[i] > x)
            count++;
    }
    printf("count : %d", count);
    return 0;
}