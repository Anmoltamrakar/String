//13. Write a program in C to find the number of times a given
//  word 'the' appears in the given string.



#include <stdio.h>



int main()


{
    int i;
    char string[100]={};
    int compare=0,length=0;
    printf("\n\n\t\tEnter a string: ");
    gets(string);
    for(i=0;i<=200;i++)
    {
        if(string[i]!=0)
        {
            length++;
        }
    }

    for(i=0;i<length;i++)
    {
        if(string[i]>=65 && string[i]<=90){
        string[i]=string[i]+32;
        }
           if(string[i]=='t' && string[i+1]=='h' && string[i+2]=='e'){
               compare++;
        }
    }


    printf("\n\n\t\tthe appears %d times in the given string.\n",compare);

    return 0;
}
