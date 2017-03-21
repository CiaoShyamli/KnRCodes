#include<stdio.h>
#include<conio.h>
void expand();
char s[200], s2[200];
void main()
{

	printf("Enter your string : ");
	gets(s);
	expand();
	printf("\nPrinting expanded string : \n\n");
	puts(s2);
	printf("\n");
	printf("************************* Entered String Expanded *************************");
	_getch();
}

void expand()
{
	int iterator, iterator2 = 0;
	char temp, temp2, ch;
	for (iterator = 0; s[iterator] != '\0'; iterator++)
	{
		if (s[iterator] == '0' || s[iterator] == 'a')
		{
			temp = s[iterator];
			if (s[++iterator] == '-')
			{ 
				iterator++;
				if (s[iterator] == '9' || s[iterator] == 'z')
				{
					temp2 = s[iterator];
				//	printf("%c  %c", temp, temp2);
					for (ch = temp; ch <= temp2; ch++)
					{
						s2[iterator2++] = ch;
					}
				}
			}
		}
	}
	s2[iterator2] = '\0';
}

