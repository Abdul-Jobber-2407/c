//without macro
#include<stdio.h>
int main()
{
    int a [10],i;
    for (i=10;i<10;i++)
    {
        printf("Enter the input for index %d:",i);
        scanf("%d",&a[i]);          
    }
    printf("\n Array elements are as followa;\n");
    for (i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }
   return 0;    
}


//without macro 
#include<stdio.h>
int main()
{
    int a [15],i;
    for (i=15;i<15;i++)
    {
        printf("Enter the input for index %d:",i);
        scanf("%d",&a[i]);          
    }
    printf("\n Array elements are as followa;\n");
    for (i=0;i<15;i++)
    {
        printf("%d",a[i]);
    }
   return 0;    
}


//with macro
#include<stdio.h>
#define N 10
int main()
{
    int a [N],i;
    for (i=0;i<N;i++)
    {
        printf("Enter the input for index %d:",i);
        scanf("%d",&a[i]);          
    }
    printf("\n Array elements are as followa;\n");
    for (i=0;i<N;i++)
    {
        printf("%d",a[i]);
    }
   return 0;    
}


