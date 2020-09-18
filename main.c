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
int bintodeci(long long n);
int checkarmstrong(int num);
int checkmagic(int number);
int checkperfect(int num);
int checkprime(int n);
long long decitobin(int n);
int largestinarray(int arr[], int n);
int getmissingno(int a[], int n);
int smallestinarray(int arr[], int n);


int main()
{   
    int arr[] = {1,2,4};
    arraysum(arr, 3);
    bintodeci(11111111);
    checkarmstrong(153);
    checkmagic(34);
    checkperfect(23);
    checkprime(17);
    decitobin(145);
    largestinarray(arr, 3);
    missingnoinarray(arr, 3);
    smallestinarray(arr, 3);

    return 0;
}
