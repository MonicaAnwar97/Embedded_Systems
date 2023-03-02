#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    float a,b,process;
    printf("enter process: ");
    scanf(" %c",&c);
    printf("enter 2 numbers: ");
    scanf(" %f %f",&a,&b);
    if (c=='*')
        process=a*b;
    else if (c=='/')
        process=a/b;
    else if(c=='+')
        process=a+b;
    else process=a-b;
    printf("process= %f",process);

    return 0;
}
