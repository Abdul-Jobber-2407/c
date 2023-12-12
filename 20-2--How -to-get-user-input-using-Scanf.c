#include<stdio.h>
int main ()
{
int num1,num2;
printf("Enter First integer:");
scanf("%d",&num1);

printf("Enter Second integer:");
scanf("%d",&num2);

printf("Numbers are :%d %d\n",num1,num2);

  return 0;
}

  


#include<stdio.h>
int main()
{
  int num1,num2;
  printf("Enter two integers:");
  scanf("%d %d",&num1,&num2);

  printf("Numbers are : %d %d ",num1,num2);

   return 0;
}


#include<stdio.h>
int main()
{
  float num1,num2;
  printf("Enter two float numbers:");
  scanf("%f %f",&num1,&num2);

  printf("Numbers are : %.1f %.1f\n ",num1,num2);

   return 0;
}


#include<stdio.h>
int main()
{
   int num1;
   float num2;
  printf("Enter an integer and float numbers:");
  scanf("%d %f",&num1,&num2);

  printf("Numbers are : %d %.1f\n ",num1,num2);

   return 0;
}



