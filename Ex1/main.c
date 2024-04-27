#include <stdio.h>
#include "NumClass.h"

int main(){
    int num1 =0;
    int num2 = 0;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter another number:");
    scanf("%d", &num2);
    if(num1 > num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    printf("The Prime numbers are: ");
    for(int i = num1; i <= num2; i++)
    {
        int checkPrime = isPrime(i);
        if(checkPrime)
        {
            printf("%d ", i);
        }
    }
    printf("\n The Armstrong numbers are: ");
    for(int i = num1; i <= num2; i++)
    {
        int checkArmStrong = isArmstrong(i);
        if(checkArmStrong)
        {
            printf("%d ", i);
        }
    }
    printf("\n The Strong numbers are: ");
    for(int i = num1; i <= num2; i++)
    {
        int checkStrong = isStrong(i);
        if(checkStrong)
        {
            printf("%d ", i);
        }
    }
    printf("\n The Palindrome numbers are: ");
    for(int i = num1; i <= num2; i++)
    {
        int checkPalindrome = isPalindrome(i);
        if(checkPalindrome)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}