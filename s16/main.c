//16. Write a program in C to convert a string to uppercase.

#include <stdio.h>



int main()


{

   char s[100];
   int i;
   printf("\n\n\t\tEnter a string : ");
   gets(s);

   for (i = 0; s[i]!='\0'; i++)
   {
      if(s[i] >= 'a' && s[i] <= 'z')
      {
         s[i] = s[i] - 32;
      }
   }

   printf("\n\n\t\tString in Upper Case = %s\n", s);


   return 0;


}

