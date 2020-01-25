#include <stdio.h>



int main()


{
   char string[100]={};

   int start=0,i,length=0;

   printf("\n\n\t\tEnter a string: ");
   gets(string);
   printf("\n\n\t\tEnter the starting position and length\n");
   scanf("%d %d",&start,&length);
   for( i=start-1;i<(start+length-1);i++)

   {
       printf("%c",string[i]);
   }
   printf("\n");


   return 0;


}
