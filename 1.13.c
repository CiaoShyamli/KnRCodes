#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	while((i=getchar))!= EOF)
	{
		if(i==' '||i=='\t')
		{
			printf("\n");
		}
		else
		{
			printf("*");
		}
		
	}
	getch();
}

