#include<stdio.h>

void main()
{
    int position;
    int arr_1[5] = {1,2,3,4,5};
    for(int i = 0;i < 5;i++)
        printf("%d ",arr_1[i]);
    printf("\nEnter position to delete: ");
    scanf("%d",&position);
    int arr_2[4];

    for(int i = 0;i < position;i++)
        arr_2[i] = arr_1[i];

    for(int i = position;i < 4;i++)
        arr_2[i] = arr_1[i+1];
    
    printf("Array after deletion\n");
    for(int i = 0;i < 4;i++)
        printf("%d ",arr_2[i]);
}