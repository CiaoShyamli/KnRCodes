#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[200],str2[200];
	int iterator,iterator2;
	printf("\n enter the values in strings= ");
	gets(str1);
	printf("\n");
	gets(str2);
    for(iterator=0;str1[iterator]!='\0';iterator++)
	{
		for(iterator2=0;str2[iterator2]!='\0';iterator2++)
		{
                if(str1[iterator]!=str2[iterator2])
					str1[iterator]=str1[iterator];
		}
	}
	getch();
}