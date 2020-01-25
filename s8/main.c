//8. Write a program in C to count total number of vowel or consonant in a string.

#include <stdio.h>


#define Msize 100

int main()


{


    char string[Msize];
    int i, length, vowel, consonant;

    printf("\n\n\t\tEnter any string: ");
    gets(string);

    vowel = consonant = 0;
    length=strlen(string);

    for(i=0; i<length; i++)

    {
        if((string[i]>='a' && string[i]<='z') || (string[i]>='A' && string[i]<='Z'))
        {

            if(string[i] =='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u' ||
               string[i] =='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U'  )
                vowel++;
            else
                consonant++;
        }
    }

    printf("\n\n\t\tTotal number of vowel = %d\n", vowel);

    printf("\n\n\t\tTotal number of consonant = %d\n", consonant);



    return 0;
}

