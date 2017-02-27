#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int iterator,flag,iterator2;
 char string[100];
 printf("\n enter your string=");
 gets(string);
 for(iterator=0;string[iterator]!='\0';iterator++)
 {
   if(string[iterator]=='('||string[iterator]=='{'||string[iterator]=='"'||string[iterator]=='\\')
   {
     flag=1;
    iterator2= iterator++;
     while(string[iterator]!='\0')
     {
       if(string[iterator]==')'||string[iterator]=='}'||string[iterator]=='"'||string[iterator]=='\\')
       {
	flag=2;
       }
     }
   }
   iterator=iterator2;
   if(flag!=2)
   {
      printf("\n error");
   }
 }
getch();
}