#include<stdio.h>
void main()
{
    int n,count=0;
    /*printf("Enter th n value:");
    scanf("%d",&n);
    if(n==0)
    {
        count++;   
    }
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("%d",count);*/
    scanf("%d",&n);
    do
    {
        n=n/10;
        count++;
    }
    while(n!=0);
    printf("%d",count);

}