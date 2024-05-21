// A c program to sum tow matrix ; 
#include<stdio.h>
int main ()

{
    int a[3][3] = {1,  2,  3,
                   4,  5,  7,
                   1,  4 ,  3};
     int b[3][3] = {1,  2,  3,
                   4,  5,  4,
                   1,  5 ,  1};
    int sum [3][3], i=0,j=0; 
    for (i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            sum[i][j] = a[i][j]+b[i][j];
        }
    }
    printf("The sum of the matrix : ");

        for (i=0;i<=2;i++)
        {
            for (j=0;j<=2;j++)
            {
                 printf("%d", sum[i][j]);
            }
            printf("\n");
        }
       return 0;
}
