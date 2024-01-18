/* Write a program that takes a floating poin number numbera as
 input and display the floating point and integer part separately*/

 #include<stdio.h>
 int main()
 {
    float n;
    int m;
    printf("Enter any floating point number\n");
    scanf("%f",&n);

     m=n;
     printf("The integer part is =%d\n",m);
     printf("The floating point part is %.2f\n",m-n); // use of arithmetic operator
      return 0;
 }
