    #include <stdio.h> 
   #include <stdlib.h>  /* for  atof() */
   #include<math.h>
   #define MAXOP   100  /* max size of operand or operator */
   #define NUMBER  '0'  /* signal that a number was found */
   #define MAXVAL  100  /* maximum depth of val stack */
				 
   int getop(char []); 
   void push(double); 
   double pop(void);
   void math( char []);
  int getch(void);
   void ungetch(int);
   /* getop:  get next character or numeric operand */
   /* reverse Polish calculator */

    int sp = 0;
	int count=0;
   /* next free stack position */   
   double val[MAXVAL];  /* value stack */
   /* push:  push f onto value stack */
  void main() 
   {     
   int type; 
   double op2; 
   char s[MAXOP];
       while ((type = getop(s)) != EOF) 
	   {
	   switch (type)
	   {
       case NUMBER:
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
             case '#':
                duplicate();
                break;
             case '~':
                swapItems();
                break;
              case '!':
                clearStack();			   
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
   
   void ungetch(int c)
   {
	   if(count!=0)
	   {
		   printf("\n too many arguments");
	   }
	   else
	   {
		   count =c;
	   }
   }


   int getop(char s[])   
   {
   int i, c;
       while ((s[0] = c = getch()) == ' ' || c == '\t')  
	   ;
       s[1] = '\0';    
	   if (!isdigit(c) && c != '.')
	   return c;    
	   /* not a number */  
	   i = 0;    
	   if (isdigit(c))   
	   /* collect integer part */    
       while (isdigit(s[++i] = c = getch()))   
	   ;  
	   if (c == '.')      /* collect fraction part */    
       while (isdigit(s[++i] = c = getch()))      
	   ;     
	   s[i] = '\0';     
	   if (c != EOF)
	   ungetch(c);    
	   return NUMBER;  
	   }
	   
	   double top(void)
{
        if (sp > 0) {
                return val[sp-1];
        } else {
                printf("Error: Stack empty.\n");
                return 0.0;
        }
		int swap(void)
         {
        double sbuf;
        if (sp > 0) {
                sbuf = val[sp-2];
                val[sp-2] = val[sp-1];
                val[sp-1] = sbuf;
                return 1;
        } else {
                printf("Error: Stack empty.\n");
                return 0;
   }
   int clear(void)
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



void math(char s[])
{
    double op2;
    
    if(strcmp(s,"sin")==0)
        push(sin(pop()));
    else if(strcmp(s,"cos")==0)
        push(cos(pop()));
    else if(strcmp(s,"exp")==0)
        push(exp(pop()));
    else if(strcmp(s,"pow")==0)
    {
        op2 = pop();
        push(pow(pop(),op2));
    }
    else
        printf("error: %s is not supported\n",s);
}