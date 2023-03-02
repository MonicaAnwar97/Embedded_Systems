/*EX6:

Write Source Code to Swap Two Numbers

#########Console_output######
Enter value of a: 1.20
Enter value of b: 2.45

After swapping, value of a = 2.45
After swapping, value of b = 1.2
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("Enter value of a:");
	scanf("%f",&a);
    printf("Enter value of b:");
	scanf("%f",&b);
	c=a;
	a=b;
	b=c;
	printf("value of a=%10.2f\n value of b=%10.2f",a,b);
    return 0;
}
