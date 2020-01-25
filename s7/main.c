//7. Write a program in C to count total number of alphabets,
//  digits and special characters in a string.



#include<stdio.h>


#define Msize 100

int main()

{

    char string[Msize];
    int alphabets, digits, specialchars, i;

    alphabets = digits = specialchars = i = 0;

    printf("\n\n\t\tEnter any string : ");
    gets(string);

    while(string[i]!='\0')

    {

        if((string[i]>='a' && string[i]<='z') || (string[i]>='A' && string[i]<='Z'))
        {
            alphabets++;
        }
        else if(string[i]>='0' && string[i]<='8')
        {
            digits++;
        }
        else
        {
            specialchars++;
        }

        i++;
    }

    printf("\n\n\t\tTotal Alphabets : %d\n", alphabets);

    printf("\n\n\t\tTotal Digits: %d\n",digits);

    printf("\n\n\t\tTotal Specialchars:%d\n",specialchars);

    return 0;
}

