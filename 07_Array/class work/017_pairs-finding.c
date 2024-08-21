//* Ques : Find the total number of pairs in the Array whose sum is equal to the given value x.
#include <stdio.h>
#include <math.h>
int main()
{
	int x, n;
	printf("enter number : ");
	scanf("%d", &x);
	printf("enter arr number : ");
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		printf("enter arr[%d] : ",i);
		scanf("%d", &arr[i]);
	}
	// int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	int pair = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] + arr[j] == x)
			{
				pair++;
				printf("pair of (%d,%d)\n", arr[i], arr[j]);
			}
		}
	}
	printf("pair : %d", pair);
	return 0;
}