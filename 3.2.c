#include "stdio.h"
#include "stdlib.h"

void escape( char[], char[] );
char t[ 200 ], s[ 200 ];

void main()
{
  int i, n, count = 0;
  char c;

  system( "clear" );

  printf( "\n enter your string" );
  printf( "\n" );

  i = 0;
  while( ( count++ < 199 ) && ( c = getchar() ) != '@' )
  	t[ i++ ] = c;

  t[ i ] = '\0';

  i = 0;

  escape( t, s );

  printf( "%s\n", s );
 }

void escape(char t[],char s[])
{
 int i = 0, j = 0;

 while( t[ i ] != '\0')
 {
       switch( t[ i ] )
       {
         case '\t':
          	s[ j++ ] = '\\';
          	s[ j ] = 't';
          break;

         case '\n':
          	s[ j++ ] = '\\';
          	s[ j ] = 'n';
            break;

          default: s[ j ] = t[ i ];
            break;
	   }
    j++;
    i++;
  }

  s[j]='\0';
}