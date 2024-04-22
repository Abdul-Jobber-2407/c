// chain pointert
#include<stdio.h>
void main()
{
    int a ,*ptr1, **ptr2,***ptr3;
    a=10;
    ptr1=&a;
    ptr2=&ptr1;
    ptr3=&ptr2;
// Multiple Indirection 
    printf("%d %d %d %d \n ", a,*ptr1,**ptr2,***ptr3);
    printf("%u %u \n",&a,ptr1);
    printf("%u %u \n",&ptr1,ptr2);
    printf("%u %u \n",&ptr2,ptr3);
    printf("%u \n",&ptr3);
}