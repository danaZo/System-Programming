#include <stdio.h>
#include <math.h>
#include "NumClass.h"

/* help function to check the length of the number */
int lengthOfNumber(int num);

/* function to reverse the number */
int reverse(int num);

int isArmstrong(int num){
    int length = lengthOfNumber(num);
    int testFinal = num;
    int sum =0;

    /* loop on all the digits and use power to the length on them, then add to the sum */
    for(int i =0; i < length;i++)
    {
        int digit = num%10;
        num = num/10;
        sum += pow(digit,length);
    }

    if(sum == testFinal)
    {
        return TRUE;
    }
    return FALSE;
}


int reverse(int num){
    int newNum =0;
    int length = lengthOfNumber(num);

    /* to reverse the number loop on the length and very time take the singels digit 
        and multiply with ten to the power of the position it needs to be in the reversed numebr */
    for(int i =0; i <length;i++)
    {
        int digit = num%10;
        num = num/10;
        newNum += (digit*pow(10, length-i-1));
    }
    return newNum;
}

int isPalindrome(int num){
    int length = lengthOfNumber(num);
    int reverseNum = reverse(num);
    if(length <= 1)
    {
        return TRUE;
    }
    
    if(num == reverseNum)
    {
        return TRUE;
    }
    return FALSE;
}

int lengthOfNumber(int num){
    int length = 0;
    int toCheckLength =num;
    while(toCheckLength !=0)
    {
        toCheckLength = toCheckLength/10;
        length++;
    }
    return length;
}