#include<stdio.h>
#include<conio.h>
void main()
{
	  float fahr, celsius;  
	  float lower, upper, step;
      lower = 0;      /* lower limit of temperatuire scale */     
	  upper = 300;    /* upper limit */   
	  step = 20;      /* step size */
      fahr = lower;   
	  while (fahr <= upper)
	  { 
		  celsius = (5.0/9.0) * (fahr-32.0);  
		  printf("%d %d\n", fahr, celsius);
		    printf("%6d %6d\n", fahr, celsius);
			  printf("%f %f\n", fahr, celsius);
			    printf("%6f %6f\n", fahr, celsius);
				  printf("%0.2f %0.2f\n", fahr, celsius);
				    printf("%6.2f %6.2f\n", fahr, celsius);
          fahr = fahr + step;
	  }
_getch();
}