 #include<stdio.h> 
 int main ()
 {
    int array[3][3] = {1 , 2, 3, 4, 5, 6, 7, 8,  9,};
    int i,j; 
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        printf("%d ", array[i][j] ); 
        printf("\n \n "); 
    }
    return 0; 
   
 }