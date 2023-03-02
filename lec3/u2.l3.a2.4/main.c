/*
EX4: C Program to Check Whether a Number is Positive or Negative
This program takes a number from user and checks whether that number is either positive or negative or zero.
Output 1
Enter a number: 12.3
12.36 is positive.
Output 2
Enter a number: e You entered zero.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    int c=1;
    while(c)
    {

    printf("Enter a number: ");
    scanf("%f",&a);
    if (a>0)
        printf("%f is positive",a);
    else if (a<0)
         printf("%f is negative",a);
    else  printf("You entered zero");
    printf("\n do you want another check? ");
    scanf(" %d",&c);

    }
    return 0;
}
