#include<stdio.h>
#include <stdlib.h>  /* for  atof() */
#include<conio.h> 
#define MAXVAL  100  /* maximum depth of val stack */
   #define MAXOP   100  /* max size of operand or operator */
   #define NUMBER  '0'  /* signal that a number was found */
   int getop(char []); 
   void push(double); 
   double pop(void);
   int swapItems(void);
   double showTop(void);
    int clearStack(void);
 // int _getch(void);
  //void _ungetch(int);
  int sp = 0;
  char val[100];


void main() 
   {     
     int type; 
     double op2; 
     char s[MAXOP];
       while ((type = getop(s)) != EOF) 
	   {
		   ;
	   switch (type)
	   {
	   case NUMBER:
	   if(type>='a'&&type<='z')
	   push(atof(s));
	   break; 
	   case '+':  
	   push(pop() + pop());  
	   break;    
       case '*':  
	   push(pop() * pop());
       break;      
       case '-':
       op2 = pop();
       push(pop() - op2); 
       break;      
	   case '/':   
	   op2 = pop();          
	   if (op2 != 0.0)     
	   push(pop() / op2);     
	   else        
	   printf("error: zero divisor\n");    
	   break;   
	   case '\n': 
	   printf("\t%.8g\n", pop());   
	   break; 
       case '?':
	   showTop();
       break;
       case '~':
       swapItems();
       break;
       case '!':
       clearStack();
	   break;
	   default:      
	   printf("error: unknown command %s\n", s);      
	   break;    
	   }    
	 }      
	   return 0;   
}
			   
			   
			  
				 
   
   void push(double f) 
   { 
   if (sp < MAXVAL)     
   val[sp++] = f;  
   else     
   printf("error: stack full, can't push %g\n", f);
   }

   /* pop:  pop and return top value from stack */ 
   double pop(void)   
   {
   if (sp > 0)   
   return val[--sp];      
   else 
   {
   printf("error: stack empty\n");       
   return 0.0;
   }
   }
   
   /* getop:  get next character or numeric operand */  
   int getop(char s[])   
   {
   int i, c;
       while ((s[0] = c = _getch()) == ' ' || c == '\t')  
	   ;
       s[1] = '\0';    
	   if (!isdigit(c) && c != '.')
	   return c;    
	   /* not a number */  
	   i = 0;    
	   if (isdigit(c))   
	   /* collect integer part */    
       while (isdigit(s[++i] = c = _getch()))   
	   ;  
	   if (c == '.')      /* collect fraction part */    
       while (isdigit(s[++i] = c = _getch()))      
	   ;     
	   s[i] = '\0';     
	   if (c != EOF)
	   _ungetch(c);    
	   return NUMBER;  
	   }
	   
	double showTop(void)
        {
        if (sp > 0) {
                return val[sp-1];
        } else {
                printf("Error: Stack empty.\n");
                return 0.0;
        }
	   }

int swapItems(void)
         {
        double sbuf;
        if (sp > 0) {
                sbuf = val[sp-2];
                val[sp-2] = val[sp-1];
                val[sp-1] = sbuf;
                return 1;
		}
	else {
           printf("Error: Stack empty.\n");
                return 0;
                }
	}

   int clearStack(void)
{
        if (sp > 0) {
                while(val[--sp] != '\0');
                sp = 0;
                return 1;
        } else {
                printf("Error: Stack empty.\n");
                return 0;
        }
}