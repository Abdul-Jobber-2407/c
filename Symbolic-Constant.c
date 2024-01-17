/*A program to find the area and circumference of a circle 
(use pi as symkbolic constant)*/

#include<stdio.h> //preprocessor directive include 
#define pi 3.1416 // preprocessor directive define
// pi=3.1416 is a symbolic constant

int main()
{
    float area,r ,cir;
     printf("Enter the radious\n");
     scanf("%f",&r);


     area=pi*r*r;
     cir=2*pi*r;

     printf("The Area =%f\n",area);
     printf("The Circumference is = %f\n",cir);
      
}