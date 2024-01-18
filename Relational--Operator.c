/*Write a c program that determine whether a number is positive or 
negative*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter any numbers\n");
    scanf("%d",&n);

    if(n>=0) // use of relational  operator
     
     printf("The number is Positive.\n");

     else
     printf("The number is Negative.\n");
     return 0;
     


}