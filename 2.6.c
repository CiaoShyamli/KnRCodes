/* Write a function setbits(x,p,n,y) 
that returns x with the n bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged.*/ 
#include<stdio.h>
void setbits(int,int,int,int);
void main()
{

	int x,p,n,y;
	printf("\ enter the number in which bits are to be set = ");
	scanf("%d",&x);
	printf("\n enter the number of bits = ");
	scanf("%d",&n);
	printf("\n enter the position =");
	scanf("%d",&p);
	printf("\n enter the another number = ");
	scanf("%d",&y);
	setbits(x,p,n,y);
	_getch();
}

void setbits( int x,int p,int n,int y)
{
	y = (y >> (p+1-n)) & ~(~0 << n);
	x = x>>n;
	x = x<<n;
	x = x|y;
	printf(" %d",x);

}
