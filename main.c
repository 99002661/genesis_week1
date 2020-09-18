#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "arraysum.h"
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
    arraysum([1,2,3], 3);
    bintodeci(11111111);
    checkarmstrong(153);
    checkmagic(34);
    checkperfect(23);
    checkprime(17);
    decitobin(145);
    /*largestinarray([1,2,3], 3);
    missingnoinarray([1,3], 2);
    smallestinarray([1,2,3], 3);*/

    return 0;
}
