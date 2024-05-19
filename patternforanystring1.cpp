#include<stdio.h>
#include<conio.h>
	void main()
		{
			int i,j;
			char ch[100];
			printf("Enter a string:\t");
			gets(ch);
			for(i=0;ch[i]!='\0';i++)
				{
					for(j=0;j<=i;j++)
						{
							putchar(ch[j]);
						}
					printf("\n");
				}
			getch();
		}
