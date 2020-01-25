//5. Write a program in C to count the total number of words in a string.
//  (Hint: If you see a space character, recongnize this as
//  start of new word.)


#include<stdio.h>


int main()



{


    int string[100];

    int length;
    printf("\n\n\t\tEnter the name\t");
    gets(string);

    length=strlen(string);
    printf("\n\n\t\tthe number of letter is the %d\n\n",length);


    return 0;
}
