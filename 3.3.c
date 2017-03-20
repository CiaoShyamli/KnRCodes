#include<stdio.h>
#include<conio.h>
void expand();
char s[200],s2[200];
void main()
{
 clrscr();
 printf(" enter  your string\n=");
 gets(s);
 expand();
 printf("\n printing expanded string");
 puts(s2);
 getch();
}

void expand()
{
int iterator,iterator2=0;
char temp,temp2,ch;
 for(iterator=0;s[iterator]!='\0';iterator++)
 {
    if(s[iterator]=='0'||s[iterator]=='a')
    {
      temp=s[iterator];
      if(s[++iterator]=='-')
	{
	  if(s[++iterator]=='9'||s[++iterator]=='z')
	  {
	    temp2=s[iterator];
	   for(ch=temp;ch<=temp2;ch++)
	   {
		s2[iterator2++]=ch;
	   }
	  }
	}
    }
 }
 s2[iterator2]='\0';
}

