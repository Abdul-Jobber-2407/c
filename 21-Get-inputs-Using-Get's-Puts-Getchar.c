#include<stdio.h>
int main()
{
   char name [50];

   printf("Enter your name :");
   scanf("%s",&name);

   printf("Hello %s\n",name);

   return 0;
}



#include<stdio.h>
int main()
{
   char name [50];

   printf("Enter your name :");
   gets(name);

   printf("Hello  ");
   puts(name);

   return 0;
}
