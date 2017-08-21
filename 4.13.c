/* Write a recursive version of the function reverse(s), which reverses the string s in place.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int i=0,j;
void reverse( char []);
void main()
{
	char string[100];
	printf("\n enter your stringfor recursive recursion =");
	gets(string);
	reverse(string);
	_getch(0);
}

void reverse( char string[])
{
	char c;
	j=strlen(string)-(i+1);
	if(i<j)
	{
		c= string[i];
		string[i]=string[j];
		string[j]=c;
		i++;
		reverse(string);
	}
	else
	{
	puts(string);
	}
}