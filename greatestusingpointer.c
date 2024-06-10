#include<stdio.h>

int main(){
	int n1,n2,greatest;
	int*p1,*p2;
	p1=&n1;
	p2=&n2;
	printf("Enter any two numbers:");
	scanf("%d%d",&n1,&n2);
	greatest=*p1>*p2?*p1:*p2;
	printf("\nGreatest=%d",greatest);
	return 0;
}