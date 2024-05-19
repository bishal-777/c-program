#include<stdio.h>
int largest(int[],int);
int smallest(int[],int);
	int main()
		{
			int i,arr[20],count,s,l;
			char a;
			printf("\nEnter the no of elements:");
			scanf("%d",&count);
			for(i=0;i<count;i++)
				{
				printf("Enter the %d number",i+1);
				scanf("%d",&arr[i]);
				}
			s=smallest(arr,count);
			l=largest(arr,count);
			printf("The largest number is %d and smallest is %d",l,s);
			return 0;
		}
	int largest(int l[],int n)
		{
			int i;
			int temp=l[0];
			for(i=0;i<n;i++)
				{
					if(l[i+1]>l[i])
						temp=l[i+1];
					else
						temp=l[i];
				}
			return temp;
		}
	int smallest(int s[],int n)
		{
			int i;
			int temp=s[0];
			for(i=1;i<n;i++)
				{
					if(s[i]<temp)
						temp=s[i];
				}
			return temp;
		}
	
