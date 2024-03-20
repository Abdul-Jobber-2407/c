#include<stdio.h>
int main()
{
    const int a [10] = {1,2,3,4,5,6,7,8,9,10};
    a[1]=45; // erro , because const means not change valu 
    return 0;
}