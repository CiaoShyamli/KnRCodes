/* Write a function invert(x,p,n) that returns x with the n bits that begin 
at position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged. */
#include<stdio.h>
void invert(int,int,int);
void main()
{
	int x,p,n;
	printf("\n enter the number = ");
	scanf("%d",&x);
	printf("\n enter the number of bits to be changed = ");
	scanf("%d",&n);
	printf("\n enter the position = ");
	scanf("%d",&p);
	invert(x,p,n);
	_getch();
}

void invert( int x,int p,int n)
{
	int y;
	y = x;
	y = (y >> (p+1-n)) & ~(~0 << n);
    y = ~(y <<(p+1-n));
	x = x&y;
	printf("\n the value of x  is %d",x);
}
	