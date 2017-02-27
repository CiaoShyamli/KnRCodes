#include<stdio.h>
#include<conio.h>
void main()
{
	char string[100],c;
	int iterator=0,flag=0,count;
	printf("\n enter your string= ");
	gets(string);
	while((c=getchar)!=EOF)
	{
	 if(c=='\t')
	 {
		 count=(8-(count%8);
		 while(count!=0)
		 {
			 string[iterator]=' ';
			 count--;
			 iterator++;
		 }
	 }
	 else
	 {
		 string[iterator]=c;
		 iterator++;
	 }
	}
	string[iterator]='\0';
	getch();
}