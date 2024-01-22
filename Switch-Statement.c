#include<stdio.h>
int main()
{
    int x=2;
    switch(x)
    {
        case 1:
            printf("Value is : 1\n");
            break;
        case 2:
            printf("Value is : 2\n");
            break;
        case 3:
            printf("Value is : 3\n");
            break;
        default:
            printf("Value is : Unkown\n");
    }
}



#include<stdio.h>
int main()
{
     char ch ='c';
    switch(ch)
    {
        case 'a':
            printf("Value is : 1\n");
            break;
        case 'b':
            printf("Value is : 2\n");
            break;
        case 'c':
            printf("Value is : 3\n");
            break;
        default:
            printf("Value is : Unkown\n");
    }
}




#include<stdio.h>
#include<string.h>
 int main()
 {
    int index;
    int marks;
    char grade[100];
    printf("Enter your marks:");
    scanf("%d",&marks);

    index=marks/10;
    switch(index)


    {
        case 10:
        case 9:
        case 8:
             printf("Excellent");
             break;

        case 7:
        case 6:
             printf("Very Good ");
             break;

        case 5:
        case 4:
             printf(" Good");
             break;
         default:
            printf("Bad");
            break;
    }
 }



  



