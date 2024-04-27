#include <stdio.h>
#include <math.h>
#include "NumClass.h"

/*declaraion for factorial function*/
int factorial(int num);



int isStrong(int num){
    int sum =0;
    int checkLength = num;
    int length =0;
    /* this loop checks the length of the number to know the time to run to loop later */
    while(checkLength!=0)
    {
        checkLength  = checkLength/10;
        length++;
    }
    int checkSum = num;

    /* this loop seperates the digits and sums the factorial of each one */
    for(int i =0; i <length;i++)
    {
        int digit = num%10;
        num = num/10;
        sum += factorial(digit);
    }
    if(sum == checkSum)
    {
        return TRUE;
    }
    return FALSE;
    


}

int factorial(int num){
    if(num ==0)
    {
        return 1;
    }
    if(num ==1)
    {
        return 1;
    }
    return num*factorial(num-1);
}

int isPrime(int num){
    if(num == 2)
    {
        return TRUE;
    }
    //if number is lower then 1 it cant be prime
    if(num <=1)
    {
        return FALSE;
    }
    // use math sqrt function to get the sqare root
    double sqrtNum = sqrt(num);

    /* run until the sqare root and check if any number higher then 2 divides the number perfectly 
        if so, it returns false, if it doesnt, it will return true */
    for(int i = 2; i < sqrtNum;i++){

        if(num%i == 0){
            return FALSE;
        }
    }
    return TRUE;
}