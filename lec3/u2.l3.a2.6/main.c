/*
EX6: C Program to Calculate Sum of Natural Numbers
Positive integers 1, 2, 3, 4... are known as natural numbers. This program takes a positive integer from user( suppose user entered n ) then, this program displays the value of 1+2+3+....n.
Output
Enter an integer: lee
Sum = 5956
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,sum;
    while(1)
    {
    printf("Enter integer number: ");
    scanf("%d",&a);
    sum+=a;
    printf("sum= %d\n",sum);
    }
    return 0;
}
