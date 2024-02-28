#include<stdio.h>
int main()
{
    float F,C;
    printf("Inter the temperature in celsius:\n");
    scanf("%f",&C);

    F=C*1.8+32;

    printf("Temperature in Fahrenhite:%f",F);
    return 0;
}
