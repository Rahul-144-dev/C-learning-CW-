/* If cost price and selling price of an item is input through the keyboard, write a program to determine whether
the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred. */
#include <stdio.h>
#include <math.h>
int main()
{
    int cp, sp, pl;
    printf("enter cost price : ");
    scanf("%d", &cp);
    printf("enter selling price : ");
    scanf("%d", &sp);

    if (sp > cp)
    {
        pl = sp - cp;
        printf("this is the profit amount %d", pl);
    }
    if (sp <= cp)
    {
        pl = cp - sp;
        printf("this is the loss amount %d", pl);
    }
    return 0;
}