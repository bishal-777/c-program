#include <stdio.h>
int main(void)
    {
    int m1[2][2],m2[2][2],m3[2][2],i,j;
    //taking input
    printf("Enter the elements of first matrix:\n");
    for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                scanf("%d",&m1[i][j]);
            }
        }
    printf("Enter the elements of second matrix:\n");
    for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                scanf("%d",&m2[i][j]);
            }
        }
    //adding 2 matrices
    for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                m3[i][j]=m1[i][j]+m2[i][j];
            }
        }
    //printing the added matrix
    printf("\nThe added matrix is:\n");
    for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                printf("%d\t",m3[i][j]);
            }
            printf("\n");
        }
    return 0;
    }
