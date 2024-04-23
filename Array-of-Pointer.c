
// Array of pointer;
#include<stdio.h>
int main()
{
   char *ptr1[3];
   ptr1[0]="AR";
   ptr1[1]="Abdul";
   ptr1[2]="Jobber";
   
   printf("%s %s %s",ptr1[0],ptr1[1],ptr1[2]);
   return 0 ;
}


#include<stdio.h>
int main()
{
   int a [5] = { 1,2,3,4,5};
   int (*p)[5]= &a;/* *p means pointer to the whole array of 5 elements
                       *p is a pointer and [5]is a integer elements;*/
   printf("%p",p);
   return 0;
}
