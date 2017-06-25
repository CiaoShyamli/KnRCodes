/* Write a function rightrot(x,n) that returns the value of the integer x rotated to the right by n positions. */
#include<stdio.h>
void rightrot( int ,int);
void main()
{
	int x,n;
	printf("\n enter your number = ");
	scanf("%d",&x);
	printf("\n enter the number of times to be rotated = ");
	scanf("%d",&n);
	rightrot(x,n);
	_getch();
}
void rightrot( int x, int n)
{
	int y,count = 0;
	y=x;
	while(y!=0)
	{
		 ++ count;
	 y = y>>1;
	}
	
     y = x & 0x1F;// bit masking
     x = x>>n;
	 y = y<<(count-n);
	 x = x|y;
	 printf("%d is the number after rotation ",x);
}