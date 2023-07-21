#include<stdio.h>
void main()
{
    int n,rem,rev=0;
    printf("Enter the n value:");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;

    }
    printf("%d",rev);
    
}