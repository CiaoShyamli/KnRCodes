#include<stdio.h>
#include<conio.h>
void main()
{
	int c, nl,b,t;
       nl = 0;   
	   b=0;
	   t=0;
	   while ((c = getchar()) != EOF)
	   {
		   if (c == '\n')
			   ++nl; 
	   if(c== ' ')
		   ++b;
	   if(c== '\t')
		   ++t;
	   }

	   printf("%d\n %d\n %d\n", nl,t,b);
}