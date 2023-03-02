/*
EX 7: C Program to Find Factorial ofa Number
For any positive number n, its factorial is given by: factorial = 1*2*3*4....n
If a number is negative, factorial does not exist and factorial of 0 is 1.
This program takes an integer from a user. If user enters negative integer, this program will display error message and if userenters non-negative integer, this program will display the factorial of that number.
Output 1
Enter an integer
Error! ! ! Factorial of negative number doesn't exist .
Output 2
Enter an integer: 16
Factorial - 362880
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    unsigned long long int factorial=1;
    printf("enter an integer: ");
    scanf(" %d",&a);
    if (a>=0)
    {
        for(int i=1;i<=a;++i)
        {
            factorial*=i;
        }
        printf("factorial=%1u",factorial);
    }
    else printf("Error!");
    return 0;
}
