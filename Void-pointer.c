//Void pointer in c 

/*# include<stdio.h>
int main()
{
    int n=10;
    void *ptr = &n;

    printf("%d",*ptr);
    return 0;
}*/

# include<stdio.h>
int main()
{
    int n=10;
    void *ptr = &n;

    printf("%d",*(int*)ptr);
    return 0;
}