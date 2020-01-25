//6. Write a program in C to compare two string with/(and without)
//  using string library functions.



#include<stdio.h>


int main()


{


    char s1[100],s2[100];
    int value;

    printf("\n\n\t\tEnter the first word\t");
    gets(s1);
    printf("\n\n\t\tEnter the second word\t");
    gets(s2);

    value=strcmp(s1,s2);


    if(value==-1)

     {

        printf("\n\n\t\tthe first word comes first in alphabetical order");
    }

        else if(value==1)
    {
            printf("\n\n\t\tthe second word comes first in alpahbetical order\n");
        }

        else
        {
            printf("\n\n\t\tthe second and first words are in same in alpahbetical order\n");
        }




    return 0;


    }

