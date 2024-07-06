#include <stdio.h>
int main()
{
	int n;
	printf("enter number : ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i+=2)
	{
		for (int j = 1; j <= i; j++)
		{
			if (j % 2 != 0)
			{
				printf("%d ", j);
			}
		}
		printf("\n");
	}
	return 0;
}