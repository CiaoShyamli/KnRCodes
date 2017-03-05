#include<stdio.h>// in question x&=(x-1) as it deletes the last bit which occured in the last position 
#include<conio.h>// for example x=7 in bits 0111 and x-1 would be 6 as 0110 therefore doing and operation will leads to deletion of last bit
int bitcount(unsigned x);
int main(void)
{
    printf("%d",bitcount(unsigned 12));
	getch();
}

int bitcount(unsigned x)
{
    int b;

    for(b=0; x!=0; x &= x-1)
        ++b;

    return b;
}