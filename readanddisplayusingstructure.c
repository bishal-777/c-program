#include <stdio.h>
struct student
{
    char name[20];
    int roll_no;
    float marks[5];
};
int main(void)
{
    struct student std[2];
    int i,j;
    for(i=0;i<2;i++)
    {
        printf("Enter your name:");
        scanf("%s",std[i].name);
        printf("\nEnter your roll no:");
        scanf("%d",&std[i].roll_no);
        printf("Enter your marks of :\nFundamentals of Electronics and Electrical Engineering\tEngineering Mathematics\tEngineering Physics\tEngineering Drawing\tEngineering Workshop");
        for(j=0;j<5;j++)
        {
            scanf("%f",&std[i].marks[j]);
        }
    }
    printf("\nName\troll no\tmarks\taverage");
    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("\n%s\t%d\t%f",std[i].name,std[i].roll_no,std[i].marks[j]);
        }
    }
    return 0;
}
