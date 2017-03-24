#include<stdio.h>
#include<conio.h>
void itoa(int,int);
char s[200];
int n,space;
void main()
{

	clrscr();
	printf("\n enter your number= ");
	scanf("%d",&n);
	printf("\n enter width for spaces= ");
	scanf("%d",&space);
	itoa(n,space);
	getch();
}

void itoa(int n,int space)
{
	  int i, sign,temp;
	  char local;
       if ((sign = n) < 0)  /* record sign */
		   n = -n;          /* make n positive */ 
	   i = 0; 
	   do 
	   {
		   /* generate digits in reverse order */  
		   s[i++] = n % 10 + '0';  /* get next digit */
	   } while ((n /= 10) > 0);    /* delete it */   
	   if (sign < 0)
		   s[i++] = '-';
		while(base!=0)
		{
			s[i++]=' ';
			base--;
		}
	   s[i] = '\0';
	   /* now doing reverse of string */
	   temp=i;
	   for(temp=0;temp<i/2;temp++)//reverse of string is done
      {
		local=s[temp];
		s[temp]=s[i];
		s[i--]=local;
      }
for(temp=0;temp<iterator;temp++)//printing value
{
  printf("%c",s[temp]);
}
}