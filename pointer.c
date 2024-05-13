#include<stdio.h>
int main()
{
    int x = 5;
    int *ptr;
    ptr = &x;

    printf("%d\n",x);
    printf("%u\n",&x); // %u referse to possitive number ; 
    printf("%u\n",ptr);
    printf("%d\n",*ptr);

}


//  Pointer pointing to different Variable

#include<stdio.h>
int main()
{
    int x = 10, y=20, z=30;
    int *ptr;

    ptr = &x;
    printf("x=%d\n",*ptr);

    ptr = &y;
    printf("y=%d\n",*ptr);

    ptr = &z;
    printf("z=%d\n",*ptr);
    
}

/*We can aso change the value of the
object pointed by the pointer*/

#include<stdio.h>
int main()
{
    int x = 10;
    int *ptr = &x;
    *ptr = 4;
    printf("%d",*ptr);
    return 0;
}


/*Never apply the indirection operator
 to the uninitialized pointer*/

#include<stdio.h>
int main()
{
    int *ptr;
    printf("%d",*ptr);
    return 0; 
}

/*output: Undefined behaviour*/


/* Assigning value to an uninitialized
pointer is dangerous*/

#include<stdio.h>
int main()
{
    int *ptr;
    *ptr = 1;
    printf("%d",*ptr);
    return 0; 
}

/*output:Segmentation fault*/

#include<stdio.h>
int main()
{
    int i = 10;
    int *p, *q;
    p = &i;
    q=p;
    printf("%u",*p,*q);
}

// Note q=p in not same as *q=*p;

#include<stdio.h>
int main()
{
    int i = 10;
    int *p, *q;
    p = &i;
    q=p;
    printf("%u",*p,*q);
}



// sample program 2
#include<stdio.h>
int a,b;
int *p;
int main(void);

{
    a=1;
    b=2;
    p=&b;
    printf("\n");
    printf("a=%d and is stored at %u\n",a,&a);
    printf("b=%d and is stored at %u\n",b,&b);
    printf("p=%d and is stored aat %u\n",p,&p);
    printf("Value of the integer pointer to by p =%u\n",*p);
    return 0;
};


 //Null Pointer in c 
 #include<stdio.h>
 int main()
 {
    int *ptr = NULL;
    printf("%d",ptr);
    printf("\n%d",sizeof(NULL));
    return 0; 
 }


