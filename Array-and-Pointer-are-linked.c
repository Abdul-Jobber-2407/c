#include<stdio.h>
int main()
{
    int i=0,j=0;
    int arr[3][3];
    int *ptr;
    ptr=&arr[0][0];

    printf("\nEnter the elements of the array :\n\n  ");

    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
         scanf("\n %d",&arr[i][j]); // thaking the input 2-D array or matrix from the use

         }
    }
printf("Following are the elements of the array : ");
for (int i=0;i<=2;i++)
{
    for(int j=0;j<=2;j++)
    {
        printf("\n %d",*ptr);
        ptr++;

    }
}
return 0; 
}
