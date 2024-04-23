
#include<stdio.h>
int main()
{
   int x[5]={10,20,30,40,50};
   int *ptr;
   ptr = &x[0];
   printf("%d\n",x[0]); // output is 10; 
   printf("%d\n",*ptr); // output is 10;
   printf("%u\n",ptr); // print address of 10; 
   printf("%d\n",*ptr++); // (*(ptr++)); = ++10; =10;  
   printf("%d\n",++*ptr); // (*(++ptr)); = 21;
   printf("%d\n",*(ptr+4)); // 50
    ptr= &x[2]; // print address of 30;
   printf("%d",*(ptr-1));
   
   return 0;
}



#include<stdio.h>
void disp (int*p)
{
   printf("%d",*p);
   printf("%d",*(p+3));
}
int main()
{
   int a[]= {1,2,3,4,5};
   {
      disp(&a);
   }
   return 0;
}



#include<stdio.h>
int main()
{
   int i=0, j=0;
   int arr[3][3];
   int *ptr1;
   ptr1 = &arr[0][0];

   printf("\n Enter the elements of the array:\n");
   for(int i=0;i<=2;i++)
   {
      for(int j=0;j<=2;j++)
      {
         scanf("\n %d",&arr[i][j]);/*taking the imput 2-D Array or matrix from the user*/

      }
   }
   printf("Following are the elements of the arraya:");
   for (int i=0;i<=2;i++)
   {
      for (int j=0;j<=2;j++)
      {
         printf("\n %d",*ptr1); // displaying the content of the matrix;
         ptr1++;        

      }
   }
   return 0; 
}