/*This program prints following pattern:
B
BI
BIS
BISH
BISHA
BISHAL*/
 
#include <stdio.h>

int main(void)
    {
    char str[7]= "BISHAL";
    int i,j;
    for(i=0;str[i]!=0;i++)
    {
        for(j=0;j<i;j++)
        {
            putchar(str[j]);
        }
        printf("\n");
    }
    return 0;
    }
