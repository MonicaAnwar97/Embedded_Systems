/*EX4:

Write C Program to Multiply two Floating Point Numbers
i should see the Console as following:
##########Console-output###

###########################
Enter two numbers: 2.4
1.1
Product: 2.640000
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   float x,y,product=0;
	printf("Enter two numbers:");
	scanf("%f%f",&x,&y);
	product=x*y;
	printf("Product:%d",product);
    return 0;
}
