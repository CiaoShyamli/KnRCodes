#include<stdio.h>
#include<conio.h>
char *fun(char [],char []);
void main()
{
 char str1[100],str2[200];
 int s;// containing address or -1 if it does not match
 printf("\n enter your string=");
 gets(str1);
 printf("\n");
 printf("\n enter your another string");
 gets(str2);
 s=fun(str1,str2);
 printf("%d",s);
 getch();
}

char *fun( char str1[],char str2[])
{
	int iterator,iterator2,flag=0;
    for(iterator=0;str1[iterator]!='\0';iterator++)
	{
		for(iterator2=0;str2[iterator2]!='\0';iterator2++)
		{
			if(str1[iterator]==str2[iterator2])
			{
				return (str2+iterator2);
			    flag=1;
			}
		}
	}
	if(flag==0)
	return (-1);
}