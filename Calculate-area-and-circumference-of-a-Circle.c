#include<stdio.h>
#define PI 3.14
int main()
{
    float rad,area,cir;
    printf("Enter radious of circle:");
    scanf("%f",&rad);

    area=PI*rad*rad;
    cir=2*PI*rad;

    printf("Area of circle:%f\n",area);
    printf("Perimeter of circle:%f\n",cir);
    return 0;
}