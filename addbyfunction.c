#include <stdio.h>

int sum(int x,int y)
    {
        int add;
        add=x+y;
        return add;
    }
int main(void)
    {
    int a,b,addition;
    printf("Enter any two numbers:");
    scanf("%d%d",&a,&b);
    addition=sum(a,b);
    printf("The sum of %d and %d is:%d",a,b,addition);
    return 0;
    }
