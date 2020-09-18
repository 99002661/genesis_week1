#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "arraysum.h"
#include "checkpalindrome.h"
#include "checkarmstrong.h"
#include "checkprime.h"
#include "largestinarray.h"
#include "missingnoinarray.h"

int arraysum(int arr[], int n);
int getmissingno(int a[], int n);
void checkpalindrome(char str[]); 
int largestinarray(int arr[], int n);
int checkarmstrong(int num);
int checkprime(int n);

int main()
{
    checkarmstrong(153);

    return 0;
}
