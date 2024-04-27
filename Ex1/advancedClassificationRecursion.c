#include <stdio.h>
#include <math.h>
#include "NumClass.h"

/* help function to check the length of the number */
int lengthOfNumber(int num);

/* recursive function to help see if numebr is Armstorng */
int isArmstrongHelper(int num, int length);

/* recursive function to reverse the number, to check if a number is palindrome */
int reverseRecursive(int num, int help);

int isPalindrome(int num)
{
    /* call the function, if they are the same, the number is a palindrome 
        start with 0 because we dont have anything in the revesred number yet */
    int revNum = reverseRecursive(num ,0);
    return(num == revNum);
}

int lengthOfNumber(int num)
{
    int length = 0;
    int toCheckLength =num;
    while(toCheckLength !=0)
    {
        toCheckLength = toCheckLength/10;
        length++;
    }
    return length;
}

int isArmstrong(int num)
{
    int length = lengthOfNumber(num);
    /* call the function to get teh sum of all the numbers to the power of the length */
    if(num == isArmstrongHelper(num,length))
    {
        return TRUE;
    }
    return FALSE;
}

int isArmstrongHelper(int num, int length)
{
    /* if the length is 1, it is just one digit, so use power to the length and return */
    if(lengthOfNumber(num) == 1)
    {
        return (int)pow(num,length);
    }
     /* take the singels digit and add it to the total sum, and then call the
        function again without the singels digit and the initial length of the number */
    return (int)pow(num%10,length) + isArmstrongHelper(num/10,length);
}

int reverseRecursive(int num, int help){
    
    if(num == 0){
        /* if we finished reversing just return the reversed numebr */
        return help;
    }
    /* multiply the number by 10 to create a spot for the singels digit, and add her */
    help = (help*10) + num%10;

    /* call the reverse function again with the current help number
        and the original number without the singels digit */
    return reverseRecursive(num/10,help);
}