/* Write a recursive version of the function reverse(s), which reverses the string s in place.*/
#include<stdio.h>// these are the header files which are included for the operation.
#include<conio.h>
#include<string.h>
int i=0,j; // these are global variables which will itterate in the function 
void reverse( char []);// function defination 
void main()
{
	char string[100];
	printf("\n enter your string for recursive recursion =");// entering the string for a manupulation
	gets(string);// gets function is defined in a library for taking input as a string which accepts the space also
	reverse(string);// function calling
	_getch(0);
}

void reverse( char string[])// function decleration
{
	char c;
	j=strlen(string)-(i+1);// calculating the total length of a string and iterating it through recursion from the last 
	if(i<j)// recursion is using the concept of swaping and will be calling untill it reaches to the condition.
	{
		c= string[i];
		string[i]=string[j];
		string[j]=c;
		i++;
		reverse(string);
	}
	else
	{
	puts(string);// printing the reverse string.
	}
}

// explaning the structure of a program
/* here firstly we are taking the string and passing to the function reverse
this function will accept the string present in the character array. Now in manupulation i puted the simple logic i.e it will call itself until we fulfill
the condition and becomes false 
After having the false condition it will prints the reverse string

output of the string eill be :-

enter your string for reverse recursion =hi this
siht ih*/