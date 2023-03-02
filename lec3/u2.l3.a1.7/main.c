/*
EX7:
it is an interview trick

Write Source Code to Swap Two Numbers without temp variable.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a,b;
    printf("Enter value of a:");
	scanf("%f",&a);
    printf("Enter value of b:");
	scanf("%f",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("value of a=%10.2f\n value of b=%10.2f",a,b);
    return 0;

}
