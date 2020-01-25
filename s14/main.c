//14. Write a program in C to remove characters in String Except Alphabets.


#include <stdio.h>



int main()


{

    int i;
    char string[100]={};
    printf("\n\n\t\tEnter a string: ");
    scanf("%s",string);
    for(i=0;i<20;i++)
    {
        if((string[i]>=65 && string[i]<=90) || (string[i]>=97 && string[i]<=122)){
            printf("s%c",string[i]);
        }
    }


    printf("\n");


    return 0;


}
