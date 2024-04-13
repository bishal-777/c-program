#include <stdio.h>
int main(void)
    {
    int arr[20],i,max=0,min=0;
    printf("Enter any 5 numbers:");
    for(i=0;i<5;i++)
        {
        scanf("%d",&arr[i]);
        }
    min=max=arr[0];
    for(i=1;i<5;i++)
        {
            if (max<arr[i])
                {
                    max=arr[i];
                }
            if (min>arr[i])
                {
                    min=arr[i];
                }
        }
    printf("\nThe maximum value is:%d and minimum value is :%d",max,min);
    return 0;
    }

