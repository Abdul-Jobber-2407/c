#include<stdio.h>
int main()
{
    float F,C;
    printf("INTER THE TEMPERATURE IN FAHRENHITE:");
    scanf("%f",&F);

    C=((F-32)*5)/9;
    printf("TEMPERTURE IN CELCIUS:%f",C);
    return 0;
}