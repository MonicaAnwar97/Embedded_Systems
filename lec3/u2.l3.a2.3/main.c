/*EX3:C Program to Find the Largest Number Among Three Numbers
In this program user is asked to enter three numbers and this program will find the largest number among three numbers entered by user. This program can be solved in more than one way.
Output
Enter three numbers : 12.2
13.452
16.193
Largest number - 13.45
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    float max;
    printf("enter three numbers ");
    scanf("%f %f %f",&a,&b,&c);
    if (a>b && a>c)
      max=a;
    else if (b>a && b>c)
        max=b;
    else max=c;
    printf("\n max=%f",max);
    return 0;
}

