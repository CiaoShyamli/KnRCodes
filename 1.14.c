#include<stdio.h>
#include<conio.h>
void main()
{
	while((i=getchar)!= EOF)
	{
		if(i==' '||i=='\t')
		{
			printf("\n");
		}
		else
		{
			putchar(i);
		}
	}
	getch();
}