#include<stdio.h>
#include<conio.h>
void main()
 {
  char a[20],b[20],i,count=0,k,t=0,j,s,d;
  clrscr();
  printf("\n enter the value of string= ");
  gets(a);
  for(i=0;a[i]!='\0';i++)
   {
      count++;
   }
   k=count;
   for(i=count;i>=0;i--)
    {
       if(a[i]!=' ')
        {
          k--;
        }
       else
        {
           for(j=k;j<=count;j++)
              {
                   b[t]=a[j];
                   printf("%c",b[t]);
                   t++;
                   d=t;
              }
           count=k  ;
           s=count;
         }
    }

    for(j=k-1;j<=s-1;j++)
     {
         b[d]=a[j];
         printf("%c",b[d]);
         d++;
     }
    b[d]=NULL;
    getch();
    }


