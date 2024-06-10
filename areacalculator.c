#include<stdio.h>
#define pi 3.14
int circle(int);
int rectangle(int,int);
int triangle(int,int);

int main(){
	int choice,r,area_circle,l,b,area_rectangle,br,h,area_triangle;
	printf("Enter 1 to for circle\tEnter 2 for rectangle\tEnter 3 for right angled triangle");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("\nEnter the radius of circle:");
			scanf("%d",&r);
			area_circle=circle(r);
			printf("\nArea of circle=%d",area_circle);
			break;
		
		case 2:
			printf("\nEnter the length and breadth of rectangle:");		
			scanf("%d%d",&l,&b);
			area_rectangle=rectangle(l,b);
			printf("\nArea of rectangle=%d",area_rectangle);
			break;
			
		case 3:
			printf("\nEnter the breadth and height of right angled triangle:");		
			scanf("%d%d",&br,&h);
			area_triangle=triangle(br,h);
			printf("\nArea of rectangle=%d",area_triangle);
			break;
			
		default:
			printf("Invalid option!");
			
		}
	return 0;
	}
	
	int circle(int r){
			int a;
			a=pi*r*r;
			return a;
		}

	int rectangle(int l,int b){
			int a;
			a=l*b;
			return a;
		}
		
	int triangle(int br,int h){
			int a;
			a=(br*h)/2;
			return a;
		}