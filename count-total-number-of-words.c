#include<stdio.h>
#define MAX_SIZE 100 // Maximum string size 
int main()
{
    char str [MAX_SIZE] ;
    int i=0,x;
    printf("Enter any String :\n"); // input string form user
    scanf("%[^\n]str",str); // very important here 

    for(x=0;str[x]!= '\0';x++)
    {
     if (str[x] == ' ' && str[x+1] != ' ')
            i++;
    }
    printf("Total Number of word :%d\n",i);

}