#include <stdio.h>
#include <math.h>
#include <stdlib.h>



double my_atan2 (double y, double x)
// y first, then x to conform to C's atan2 convention
{
  double dL,cL,sL ; // degrees, cosine, sine of "low"
  double dH,cH,sH ; // degrees, cosine, sine of "high"
  double dM,cM,sM ; // degrees, cosine, sine of "middle"
  double len ;

  len = sqrt(x*x + y*y) ;
  x = x / len ; y = y/len ; // now on the unit circle
  // from here on, its up to you whether to 
  // build off the x or the y ... this code chooses y


  dL =  0 ; cL = 1 ; sL = 0 ;
  dH = 90 ; cH = 0 ; sH = 1 ;

  do {
    dM = (dL + dH) / 2 ;
    cM = (cL + cH) / 2 ;
    sM = (sL + sH) / 2 ;
    len = sqrt(cM*cM + sM*sM) ;
    cM = cM/len ; 
    sM = sM/len ;

    // set up for next pass :
    if (y < sM) {
      dH = dM ; cH = cM ; sH = sM ;
    } else {
      dL = dM ; cL = cM ; sL = sM ;
    }


  } while (sH - sL > 0.000001) ;

  return dM ;
}







int test_my_atan2()
{
  double x,y,degrees ;

  printf("enter (x,y) in first quadrant : ") ;
  scanf("%lf %lf",&x, &y) ;

  degrees = my_atan2(y,x) ;

  printf("this subroutine gives : %lf\n", degrees) ;
  printf("math library results  : %lf\n", atan2(y,x)*180/M_PI) ;

}


int main()
{
  test_my_atan2() ;
}
