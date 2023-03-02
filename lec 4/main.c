#include <stdio.h>
#include <stdlib.h>

int main()
{

    char x[7];
    x[0]='h';
    x[1]='e';
    x[2]=0;
    x[3]='l';

    //printf("%s \n",x);
    //printf("%s \n",&x[0]);
    printf("%s \n",&x[1]);
    //printf("%s \n",&x[2]);
    //printf("%s \n",&x[3]);
    return 0;
}
