#include <stdio.h>
#include <complex.h>
#include <math.h>


struct complex {
	
	float x,y,F;
	
};

complex complex_cos(complex chislo){
	complex F;
	F.x=cos(chislo.x)*cosh(chislo.y);
	F.y=sin(chislo.x)*sinh(chislo.y);
	return F;
}

int main(void)
{
   struct complex chislo,F;
   printf("Enter x:");
   scanf("%f", &chislo.x);
   printf("Enter y:");
   scanf("%f",&chislo.y);
   F = complex_cos(chislo);
   printf("Result = %4.2f - (%4.2f)i",F.x,F.y);
   
   getchar();             
   return 0;              
 }
