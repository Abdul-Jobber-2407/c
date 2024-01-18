/*A C program to determine a number is even or 
odd using conditional operator*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a integer number:");
    scanf("%d",&n);

//use of conditional operator?
    (n%2==0)?printf("Even number.\n"): printf("Odd number.\n");

}