/*
EX2: C Program to Check Vowel or Consonant
Alphabets a, e, i, o and u are known as vowels and all alphabets except these characters are known as consonants. This program asks userto entera character and checks whether that character is vowel or not.
Output 1
Enter an alphabet: i
i is a vowel.
Output 2
Enter an alphabet:
G is a consonant.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alphabet;
    int f=1;
    char Q;
    while(f)
    {
    printf("\n Enter a character you want to check:");
    scanf(" %c",&alphabet);
    if (alphabet=='a'||alphabet=='e'||alphabet=='i'||alphabet=='o' ||alphabet=='u')
    {
       printf("\n %c is a vowel",alphabet);
       printf("\n do you want to check again?");
       scanf(" %c",&Q);
       if(Q=='Y')
        f=1;
       else
         f=0;

    }
    else
    {
        printf("\n %c is a consonant",alphabet);
        printf("\n do you want to check again?");
        scanf(" %c",&Q);
        if(Q=='Y')
         f=1;
        else
         f=0;
    }
    }
    return 0;
}

