 #include<stdio.h>
 int main()
 {
    int num1,num2,result;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);

    
    result=num1+num2;
    printf("sum=%d\n",result);

    result=num1-num2;
    printf("sub=%d\n",result);

    result=num1*num2;
    printf("mul=%d\n",result);

    result=num1/num2;
    printf("Div=%d\n",result);

    result=num1%num2;
    printf("Reminder=%d",result);


 }