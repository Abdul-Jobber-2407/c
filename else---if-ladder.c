#include<stdio.h>
int main()

{
    int mark;
    printf("Enter your mark:");
    scanf("%d",&mark);

    if(mark>=80)
    {
        printf("A+\n");
    }
    else if(mark >=70)
    {
      printf("A\n");
    }
    else if(mark >=60)
    {
        printf("A-\n");
    }
    else if(mark >=50)
    {
        printf("B\n");
    }
    else if(mark >=40)
    {
        printf("C\n");
    }
    else if(mark >=33)
    {
        printf("D\n");
    }
    else
    printf("F\n");


}