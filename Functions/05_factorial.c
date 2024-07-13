#include <stdio.h>
int main()
{
    int n, r;
    printf("enter number n : ");
    scanf("%d", &n); //! it scans the n and store it to int n;
    printf("enter number r : ");
    scanf("%d", &r); //! it scans the r and store it to int r;
    int nfact = 1, rfact = 1, nrfact = 1;
    for (int i = 1; i <= n; i++)
    {
        nfact *= i;
    }
    //! printf("%d\n", nfact);
    for (int j = 1; j <= r; j++)
    {
        rfact *= j;
    }
    //! printf("%d\n", rfact);
    for (int i = 1; i <= n - r; i++)
    {
        nrfact *= i;
    }
    //! printf("%d\n", nrfact);
    int ncr = nfact / (rfact * nrfact);
    printf("%d", ncr);
    return 0;
}
