//4. Write a program in C to print individual characters of string
//  in reverse order.

#include <stdio.h>


int main()



{

    char string[100];

    int x,i;

    printf("\n\n\t\tEnter the sentence:");

    gets(string);
    x=strlen(string);
    for(i=x-1;i>=0;i--)

    {

     printf("%c",string[i]);
    printf("\n");
     }

    return 0;
}

