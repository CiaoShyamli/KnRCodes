#include<stdio.h>
#include<conio.h>
void itob();
char string[200];
int num,base;
void main()
{
	clrscr();
	printf("Enter your number= ");
	scanf("%d",&num);
	printf("\n enter your base for convertion= ");
	scanf("%d",&base);
	itob();
	getch();
}
void itob()// convertion of number to a perticular base
{
	int iterator=0,temp,t;
	char local;
	while(num!=0)
	{
		string[iterator++]=num%base+'0';
		num=num/base;
	}
	t=--iterator;
for(temp=0;temp<t/2;temp++)//reverse of string is done
{
	local=string[temp];
	string[temp]=string[t];
	string[t--]=local;
}
for(temp=0;temp<iterator;temp++)//printing value
{
  printf("%c",string[temp]);
}
}

