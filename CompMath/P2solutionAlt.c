
#include <stdio.h>
#include <math.h>


int main()
{
  double n,s,ls ;

  n = 1000 ;

  s = pow(n/M_E, n) * sqrt(2*M_PI*n) ;

  printf("direct s = %lf\n",s) ;

  ls = n*log10(n/M_E) + 0.5*log10(2*M_PI*n) ;

  printf("log10(s) = %lf\n",ls) ;

  double i,f,m ;
  i = floor(ls) ;
  f = ls - i ;
  m = pow(10,f) ;
  printf("%lf x 10 ^ %lf\n",m, i) ;


  s = sqrt(2*M_PI*n) ;
  //  s *= pow(n/M_E/10, n) ; // gives inf
  //  s *= pow(n/M_E/100, n) ; // still gives inf
  //  s *= pow(n/M_E/1000, n) ; // gives 0
  s *= pow(n/M_E/(100*sqrt(10)), n) ;
  printf("alternate : %e x 10^%lf\n",s,2.5*n) ;

}
