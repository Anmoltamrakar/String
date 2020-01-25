//3. Write a program in C to separate the individual characters from a string. Input the string : Hello!




#include<stdio.h>



int main()

{

   char string[100];
   int i= 0;

      printf("\n\n\t\tInput the string : ");
      gets(string);

      printf("\n\n\t\tThe characters of the string are : \n");



   while(string[i]!='\0')
   {
      printf("\n\n\t\t%c  ", string[i]);
      i++;
   }
   printf("\n");

   return 0;

}
