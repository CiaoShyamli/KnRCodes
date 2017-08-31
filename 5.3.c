/* Write a pointer version of the function strcat that  strcat(s,t) copies the string t to the end of s*/
#include<stdio.h>
#include<conio.h>
void strcat(char *, char *);
void main()
{
	int s[200],t[200];
	gets(s);
	gets(t);
	strcat( &s , &t );
	puts(s);
	_getch();
}


	   /* strcat:  concatenate t to end of s; s must be big enough */ 
void strcat(char *s, char *t)
{
	int i, j;
      i = j = 0;
	  while (*(s+i) != '\0') /* find end of s */   
		   i++;  
	  while ((*(s + i++) = *(t + j++)) != '\0') /* copy t */ 
		   ; 
	}
