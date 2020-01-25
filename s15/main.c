//15. Write a program in C to find the largest and smallest word in a string.


#include <stdio.h>



int main()
{
    char string[] = "It is a string with smallest and largest word";
    char words[100][100], small[100], large[100];
    int i = 0, j = 0, k, length;

      for(k=0; string[k]!='\0'; k++){


        if(string[k] != ' ' && string[k] != '\0'){
            words[i][j++] = string[k];
        }
        else{
            words[i][j] = '\0';

            i++;

            j = 0;
        }
    }


    length = i + 1;


    strcpy(small, words[0]);
    strcpy(large, words[0]);


    for(k = 0; k < length; k++){

        if(strlen(small) > strlen(words[k])){
            strcpy(small, words[k]);
        }
        if(strlen(large) < strlen(words[k]))
            strcpy(large, words[k]);
    }

    printf("\n\n\t\tLargest word: %s", large);

    printf("\n\n\t\tSmallest word: %s\n", small);


    return 0;
}
