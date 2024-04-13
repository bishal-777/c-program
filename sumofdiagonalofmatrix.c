#include<stdio.h>
    int main(void)
        {
    int m[20][20],i,j,sum=0;
        //taking input
        for(i=1;i<3;i++)
        {
            for(j=1;j<3;j++)
            {
                printf("Enter the element [%d%d]:\t",i,j);
                scanf("%d",&m[i][j]);
            }
        }
        //processing
        for(i=1;i<3;i++)
        {
            for(j=1;j<3;j++)
            {
                if(i==j)
                {
                    sum+=m[i][j];
                }
            }
        }
        printf("\nThe sum is :%d",sum);
        return 0;
        }
