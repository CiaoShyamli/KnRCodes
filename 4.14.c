/*Define a macro swap(t,x,y) that interchanges two arguments of type t.*/
#include<stdio.h>
#include<conio.h>
#define swap(t,x,y) t=x,x=y,y=t
void main()
{
	int var1,var2,temp;
	scanf("%d\t %d",&var1,&var2);
	swap(temp,var1,var2);
	printf("\n swaped values %d \t%d ",var1,var2);
	_getch();
}