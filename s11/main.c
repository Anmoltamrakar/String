//11. Write a C program to check whether a given substring is present in the given string.


#include <stdio.h>



int main()


{


    char string[100]={},search[100]={};

    int comp=0,len=0,searchlen=0,change=0,i,j;

    printf("\n\n\t\tEnter a string: ");
    gets(string);
    printf("\n\n\t\tEnter a sub-string to search: ");
    gets(search);

    for( i=0;i<=20;i++){
        if(string[i]!=0){
            len++;
        }
    }

    for(i=0;i<=20;i++){
        if(search[i]!=0){
            searchlen++;
        }
    }
    for( i=0;i<len;i++){
        for( j=0;j<len;j++){
            if(i==0){
            if(search[i]==string[j]){
                comp++;
                change=j;
            }
            }else{
                if(search[i]==string[change+1]){
                    comp++;
                    change++;
                }
            }
        }
    }

    if(comp>=searchlen){
        printf("\n\n\t\t%s is present in %s\n",search,string);
    }



    return 0;
}
