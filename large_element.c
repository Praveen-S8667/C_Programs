#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max_ind=0;
    for(int i=0;i<n;i++)
    {
        if(arr[max_ind]<arr[i])
        {
            max_ind=i;
        }
    }
    printf("max=%d",arr[max_ind]);

}