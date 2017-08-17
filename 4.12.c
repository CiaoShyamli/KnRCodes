/*Adapt the ideas of printd to write a recursive version of itoa; that is,
convert an integer into a string by calling a recursive routine.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void itoa(int);
void reverse( char []);
char s[100];
void main()
{
	int c,i=0;
	printf(" Enter integer");
	scanf("%d",&c);
	itoa(c);  /* itoa:  convert n to characters in s */
	puts(s);
	_getch();
}


 void itoa(int n)   
  {      
  int i, sign;
  if((sign = n) < 0)  /* record sign */ 
  n = -n;          /* make n positive */ 
  i = 0; 
   if(n>0)
   {
	   s[i++] = n % 10 + '0';/* generate digits in reverse order */ 
       itoa(n /= 10);  /* get next digit */   
   }
 if(sign < 0) 
 s[i++] = '-'; 
 s[i] = '\0';  
 reverse(s);  
 }

  
   /* reverse:  reverse string s in place */  
void reverse(char s[])  
   {      
   int c, i, j;
       for (i = 0, j = strlen(s)-1; i < j; i++, j--) 
	   {  
	   c = s[i];    
       s[i] = s[j];    
       s[j] = c;   
	   } 
   } 
	   
