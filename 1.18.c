#include<stdio.h>
#include<conio.h>
void main()
{
 char str[20];
 int flag=0,i,temp,l;
 clrscr();
 printf("\n enter your string=");
 gets(str);
 for(i=0;str[i]!='\0';i++)
 {

	 if(str[i]==' '|| str[i]=='\t')
	 {
	
		 for(temp=i;str[temp]!='\0';temp++)
		 {
			 str[temp]=str[temp+1];
		 }
	 }
	 else
	 {
		 printf("%c",str[i]);
	 }
 }
 getch();
}
