#include<stdio.h>
#include<conio.h>
void lower( char );
void main()
{
	char element;
	printf("\n enter your element=");
	scanf("%c",&element);
	lower(element);
	getch();
}

void lower( char ele)// here converstion from upper to lower will be taken place
{
	char low;
	low = (ele >= 'A' && ele <= 'Z') ? ele-32 : ele;
	printf("%c",low);
}
