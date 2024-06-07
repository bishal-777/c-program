#include<stdio.h>
void swap(int*,int*);

int main(void)
{
    int a,b;
    printf("Enter any two numbers:");
    scanf("%d%d",&a,&b);
    printf("\nBefore swapping:a=%d and b=%d",a,b);
    swap(&a,&b);
    printf("\nAfter swapping:a=%d and b=%d",a,b);
    return 0;
}

void swap(int*x,int*y)
{
    int c=*x;
    *x=*y;
    *y=c;
 }
