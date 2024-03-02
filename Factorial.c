#include<stdio.h>
int main()
{
    int a,f=1,m,i;
    printf("Enter the value=");
    scanf("%d",&m);

    for(i=1;i<=m;i++)
    f=f*i;
    printf("The Factorial of %dis =%d",m,f);
    return 0;
    
}