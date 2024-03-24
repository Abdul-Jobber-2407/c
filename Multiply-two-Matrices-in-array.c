#include<stdio.h>
int main()
{
    int a[2][2]={{5,4},{4,4}};
    int b[2][2]={{6,7},{4,8}};
    int c[2][2]={0};
    int i,j,k;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];

            }
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
         printf("%d\t",c[i][j]);
        }
        printf("\t\t\n");
    }
}