#include<stdio.h>
void main()
{
    int num1,num2,log1,log2,log3;
    scanf("%d" "%d" ,&num1,&num2);
    printf("The number 1 and number 2 is:%d , %d\n",num1,num2);
    log1=(num1==num2||num1>=num2);
    log2=(num1>num2&&num1<=num2);
    log3=!(num1==num2||num1>=num2);
    if(log1==1)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    if(log2==1)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    if(log3==1)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }




}

