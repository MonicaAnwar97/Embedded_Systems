/*
EX5: C Program to Check Whether a Character is an Alphabet or not
This program takes a character from user and checks whether that character is an al phabet or not.
Output 1
Enter a character:
* is not an alphabet Output 2
Enter a character:  K is an alphabet
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1;
    while(x)
    {
    char c;
    printf("Enter the char which you want to make sure of: ");
    scanf(" %c",&c);
    if (c>='a'&& c<='z')
        printf("%c is an alphabet",c);
    else printf("it is not an alphabet");
    printf("\n do you want another check? ");
    scanf(" %d",&x);

    }
    return 0;
}
