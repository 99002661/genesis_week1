#include <stdio.h>
#include <math.h>
#include "missingnoinarray.h"

int getmissingno(int a[], int n)
{
    int i, total;
    total = (n + 1) * (n + 2) / 2;
    for (i = 0; i < n; i++)
        total -= a[i];
    return total;
}