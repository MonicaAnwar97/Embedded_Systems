/*
EX 1: Write C Program to Check Whether a Number is Even or Odd
You should know those topics:
C Programming Operators
C Programming if, if..else and Nested if...else Statement
The program idea
Numbers perfectly divisible by 2 are known even numbers and numbers which are not divisible by 2 are cal led odd numbers. This program takes an integer from user and checks whether that number is even or odd and displays the result.
Output 1
Enter an integer you want to check: 25 25 is odd.
Output 2
Enter an integer you want to check: 12 12 is even.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,f=1;


    while(f)
    {


    printf("\n Enter an integer you want to check:");
    scanf("%d",&a);
    if (a%2==0)
    {
       printf("\n %d is even",a);
    }
    else if (a%2==1)
    {
       printf("\n %d is odd",a);
       f=0;
    }
    }
    return 0;
}
