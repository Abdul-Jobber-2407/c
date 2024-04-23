//Pointer Arithmetic in c 
/*
++  increment(gose to the next memory location);
--  decrement(Gose to the previous memory location);
-=  Subtracts Value from Pointer;
+=  Adding to the Pointer;
*/

#include<stdio.h>
int main()

{
   int x=8;
   int *ptr;
   ptr=&x;

   printf("The Address of Value:%u\n",&x);
   printf("%u\n",ptr);

   ++(*ptr); // pointer arithmetic , it change to value;
   printf("%u\n",x);

   ++(ptr); // pointer arithmetic, it change to address of value;
   printf("%u\n",ptr);

   return 0;
} 



#include<stdio.h>
int main()
{
   char ch = 'A';
   char *ptr = &ch;
   printf("Character's address of value %d\n",ptr);
   ++(ptr);
   printf("%d\n",ptr);
   return 0;
}




#include<stdio.h>
int main()
{
   int ArrayA[3]={1,2,3};
   int *ptr=ArrayA;
   
   printf("Array Value%d\n",*ptr);
   printf("Address :%u\n",ptr);

   ptr++;
   printf("\n\nArray Valuen %d\n",*ptr);
   printf("Address :%u\n",ptr);

   return 0;

}