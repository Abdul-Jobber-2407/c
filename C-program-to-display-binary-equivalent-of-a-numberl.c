#include<stdio.h>
int main()
{
   int num; 
   int binary[8] = {0,0,0,0,0,0,0,0};\
   int i=0 ,j=0;

   printf("Enter the possitive number:");
   scanf("%d",&num);

   // convert number to binary 
   
   while(num>0)
   {
      binary[i] = num % 2 ;
      num = num / 2;
      i++;
   }
   //print binary equivalent 
         printf("Binary equivalent : ");
        for (j=7;j>=0;j--)
   {
    printf("%d",binary[j]);
   }
   return 0; 
}