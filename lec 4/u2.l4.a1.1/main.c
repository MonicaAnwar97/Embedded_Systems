#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int x=0;
    int n;
    float num;
    float sum=0;
    float average=0;
    printf("enter n=");
    scanf("%d",n);
    for (i=1;i<=n;i++)
    {
        printf("enter number %d= ",i);
        scanf("%f",&num);
        if (num<0)
        {
          x++;
          break;
        }
        else sum+=num;

    }
    average=sum/(i-x);
    printf("VERAGE=%f ",average);
    return 0;
}
