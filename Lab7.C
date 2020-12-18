#include <math.h> 
#include <stdio.h>   
int main ()   
{     
   double F,x,T,F1,L,v,n; int k;
    x=0.58; k=1;v=1;n=1;
    double const  epsilon=1E-5; 
    F=0;T=acos(x);L=(3.14/2)-x;
            
            //arccosx=0.95207
            //1=0.95748  2=0.94764
            
    if(x<-1 || x>1){
            	
    printf("False x=%g\n",x);    
	getchar();            
    return 1; 
	}
			
    while ((L-F)>T) {
    	
         v*=(2*k-1);
         n*=(2*k);
         
    F+=((v*pow(x,(2*k+1)))/(n*(2*k+1)));
    
    k++;
 
    }
  printf(" %10.5f %d epsilon=%f ",L-F, k , epsilon);
  getchar();  
  return 0;  
}
