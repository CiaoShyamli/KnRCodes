#include<stdio.h>
#include<conio.h>
void htoi();
char string[]={0x10,0x2f,0x02};
void main()
{
 printf("\n converting hexadecimal to integer");
 htoi();
 getch();
}
 void htoi()
 {
   int iterator;
   printf("\n");
   for(iterator=0;iterator<=2;iterator++)
   {
     printf("%d",string[iterator]); // print in decimal
     printf("\n");
     printf("%x",string[iterator]);// print the value in hexadecimal
   }
}
