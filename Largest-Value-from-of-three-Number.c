/*largest value from three number*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number a,b,c:");
    scanf("%d %d %d",&a,&b,&c);


    if(a>=b && a>=c)
    printf("%d is the largest number",a);

     if(b>=a && b>=c)
    printf("%d is the largest number",b);

     if(c>a && c>=b)
    printf("%d is the largest number",c);

    return 0;
}