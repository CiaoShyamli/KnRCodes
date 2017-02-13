#include<stdio.h>
#include<conio.h>
void main()
{
	int c,b=0;
	while((c=getchar())!=EOF)
	{
		if(c== ' ')
			++b;
	}
	b=b+1;// here b is incremented because no of words are more than 1 of space
	printf("%d",b);
	getch();
}