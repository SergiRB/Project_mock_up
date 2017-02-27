/* -------------------------------------------------------------------
    				Estimation of an integral
    			    using Monte Carlo method
 -------------------------------------------------------------------- */

/* Sergi Roca Bonet, Barcelona 2016 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>

int n, i;
double r, integral, xi, xf;
double integrand(double r);
double random_generator();
//#define pi acos(-1.);

/* This is the function we are going to integrate */
double integrand (double x){
	double f = x + sin(x);
	return f;
}

int main(void) {

	double pi = acos(-1.);
/* limits of the integration */
	xi = 0. ; xf = pi ;

	printf("Borrado :')'\n");

}



/* random number generator (a very basic one) */
double random_generator() {
    return (double)rand() / (double)RAND_MAX ;
}
