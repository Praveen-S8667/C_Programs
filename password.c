#include<stdio.h>
int main()
{
    char arr[]="praveen@123";
    int count1=0;
    int count2=0;
    int count3=0;
    
    for(int i=0;arr[i]!='\0';i++)
    {
        if((arr[i]>=97&&arr[i]<=122))
        {
            count1++;
        }
        if((arr[i]>=48&&arr[i]<=57))
        {
            count2++;
        }
        if((arr[i]>=58&&arr[i]<=64))
        {
            count3++;
        }
      
    }
    printf("%d",count1);
    printf("%d",count2);
    printf("%d",count3);
        

    if(count1!=0&&count2!=0&&count3!=0)
    {
        printf("Strong passsword");
    }
    else{
        printf("Weak passsword");

    }
}