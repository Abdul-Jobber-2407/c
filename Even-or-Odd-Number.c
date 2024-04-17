// A C program to determine whether a number is odd or even
#include<stdio.h>
int main()
{

int n;   //declare variable n for a number
printf("Enter a number:");
scanf("%d",&n); //input n

if(n%2==0)

{
    printf("%d is an even number\n",n);
}
else
{
    printf("%d is an odd number\n",n);
}
return 0;

}