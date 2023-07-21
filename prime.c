#include<stdio.h>
void main()
{
    int n;
    printf("Enter the n value:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        int flag=1;
        //printf("%d",i);
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            printf("%d ",i);
        }

    }


}