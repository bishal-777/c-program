#include <stdio.h>

int main(void)
    {
    float div=0;
    int n1,n2;
    int *p1 =&n1,*p2=&n2;
    int sum,diff,mult,rem=0,choice = 0,larger;
    printf("Enter any two numbers:");
    scanf("%d%d",&n1,&n2);
    printf("Press 1 to add\tPress 2 to substract\nPress 3 to multiply\tPress 4 to divide\nPress 5 to find reminder\tpress 6 to find the larger number");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            sum=*p1+*p2;
            printf("\nThe sum is %d",sum);
            break;
        
        case 2:
            diff= *p1-*p2;
            printf("\nThe difference is %d",diff);
            break;
            
        case 3:
            mult=*p1 * *p2;
            printf("\nThe multiplication is %d",mult);
            break;
            
        case 4:
            sum=*p1 / *p2;
            printf("\nThe division is %2.f",div);
            break;
        
        case 5:
            sum=*p1%*p2;
            printf("\nThe reminder is %d",rem);
            break;
        
        case 6:
            larger=*p1>*p2?*p1:*p2;
            printf("\n%d is the larger number",larger);
            break;
        
        default:
            printf("Invalid option!");
    }
    return 0;
    }
