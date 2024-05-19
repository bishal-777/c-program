#include<stdio.h>
int count(int);
void read(int [],int);
void sort(int [],int);
void display(int[],int);
int main()
	{
		int arr[20],n,temp;
		n=count(temp);
		read(arr,n);
		sort(arr,n);
		printf("\nThe sorted numbers are:\n");
		display(arr,n);
		return 0;
		
	}
int count(int n)
	{
		printf("Enter the no of elements:");
		scanf("%d",&n);
		return n;
	}
void read(int a[],int n)
	{
		int i;
		for(i=0;i<n;i++)
			{
				printf("\nEnter the %d element:\t",i+1);
				scanf("%d",&a[i]);
			}
	}
void sort(int b[],int n)
	{
		int i,j,x,temp;
		x=n-1;
		for(i=0;i<x;i++)
			{
				for(j=0;j<x;j++)
					{
						if(b[j]>b[j+1])
							{
							temp=b[j];
							b[j]=b[j+1];
							b[j+1]=temp;
							}	
							
					}
			}
	}
void display(int c[],int n)
	{
		int i;
		for(i=0;i<n;i++)
			{
				printf("%d\t",c[i]);
			}
	}
