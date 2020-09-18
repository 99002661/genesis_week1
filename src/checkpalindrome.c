#include <stdio.h>
#include "checkpalindrome.h"

void isPalindrome(char str[]) 
{ 
    int l = 0; 
    int h = strlen(str) - 1; 
  
    while (h > l) 
    { 
        if (str[l++] != str[h--]) 
        { 
            printf("%s is Not Palindrome", str); 
            return; 
        } 
    } 
    printf("%s is palindrome", str); 
} 