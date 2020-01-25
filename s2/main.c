//2. Write a program in C to find the length of a string
//  with/(and without) using library function.




#include<stdio.h>




int main()


{


    char string[100];

    int l,i,count=0;

    printf("\n\n\t\tEnter a sentence:");

    gets(string);
    l=strlen(string);

    for (i=0;i<l;i++)
    {
        if(string[i]!=' ' )
        {
            continue;
        }
            else(count++);
        }
        printf("\n\n\t\tthe total number of word is %d:",count+1);

        printf("\n\n");


        return 0;


}




