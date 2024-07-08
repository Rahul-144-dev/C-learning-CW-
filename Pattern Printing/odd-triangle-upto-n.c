#include <stdio.h>
int main()
{
	int n, x = 1;
	printf("enter number : ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= x; j += 2)
		{
			printf("%d ", j);
		}
		printf("\n");
		x += 2;
	}
	return 0;
}