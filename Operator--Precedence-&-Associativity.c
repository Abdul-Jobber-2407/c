//A C program to understand the concept of evaluation of expression.

#include<stdio.h>
int main()

{
    float a,b,c,s,t,p;
    a=5;
    b=10;
    c=15;
    s=a-b/2+c*3-1;
    t=a-b/(2+c)*(3-1);
    p=a-(b/(2+c)*3)-1;

    printf("\n Value of s=%.3f",s);
    printf("\n Value of t=%.3f",t);
    printf("\n Value of p=%.3f",p);

    return 0;
}