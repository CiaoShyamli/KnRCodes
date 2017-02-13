#include<stdio.h>
#include<conio.h>
void main()
{
char a[50];
int i,count=0;
clrscr();
printf("\n enter the string for reducing the spaces=");
gets(a);
for(i=0;a[i]!='\0';i++)
{
 if(a[i]==' ')
  {
    count++;
  }
 if(a[i]!=' ')
  count=0;
 if(count==0||count==1)
  {
   printf("%c",a[i]);
  //count=0;
  }
}
getch();
}
