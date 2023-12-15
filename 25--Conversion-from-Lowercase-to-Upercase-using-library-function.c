/*Conversion from lowercase to Upercase using library function.
  such as:lowercase is 'a',then upercase is 'A' */


#include<stdio.h>
 int main()
 {
  char lower;
  printf("Enter any lowercase letter:");
  scanf("%c",&lower); //b=98
  
  printf ("The uppercase letter :%c",lower-32); //B=66
   }