//12. Write a program in C to read a sentence and replace lowercase
//  characters by uppercase and vice-versa.

#include <stdio.h>


int main()


{
    int i;
    char string[100]={};
    printf("\n\n\t\tEnter a string: ");
    gets(string);
    for(i=0;i<200;i++)
    {
        if((string[i]>=65 && string[i]<=90))
        {
            printf("%c",string[i]+32);
        }
        else if((string[i]>=97 && string[i]<=122))
        {
             printf("%c",string[i]-32);
        }
        else
        {
            printf("%c",string[i]);
        }
    }
    printf("\n");


    return 0;
}
