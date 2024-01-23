#include<stdio.h>
int main()
{
    int n=1;
    do
    {
    printf("%d\n",n);
    n=n+1;
    } 

    while(n<=5);

}





#include<stdio.h>
int main()
{
    int n;
    do
     {
        printf("Enter an integer\n");
        scanf("%d",&n);
    
     }
     while(n!=0);
     printf("You are out of the loop");
    
}