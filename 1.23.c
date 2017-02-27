#include<stdio.h>
#include<conio.h>
void main()
{
	char a[20];
	int i,c;
	while((c=getchar())!= EOF)
	{
		if(c=='//'||c=='/*'||c=='*/')
		{
		}
		else
		{
			a[i]=c;
			i++;
		}
	}
	getch();
}