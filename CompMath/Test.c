#include <math.h>
#include <stdlib.h>
#include <stdio.h>


double myLog(double x, double p){

  double answer, low, mid, high, d, guess, lowans, midans, highans;
  double pwr ;
  int i ;

  low=0;
  mid=.5;
  high=1;
  lowans=1;
  highans=x;
  midans=sqrt(x);
  d=floor(p);
  answer=1;


  d=floor(p);

  pwr = 1 ;
  for (i = 1 ; i <= d ; i++) {
     pwr = pwr * x ;
  }

  guess = p-d ;
 
  while (0==0){

    if (guess > mid){
      low=mid;
      mid=(high+low)/2;
      lowans=midans;
      midans=sqrt(lowans)*sqrt(highans);
    }

    if (guess < mid){
      high=mid;
      mid=(high+low)/2;
      highans=midans;
      midans=sqrt(lowans)*sqrt(highans);
    }

    if (guess == mid){
      answer=midans;
      break ;
    }

    if (guess == low){
      answer = lowans ;
      break ;
    }

    if (guess == high){
      answer = highans ;
      break ;
    }

  } 
  return answer*pwr ;
 
}


int main (){
  double x, p, answer;
  printf(":");
  scanf("%lf", &x);
  printf("\n^");
  scanf("%lf", &p);
  answer=powpow(x, p);
  printf("%lf to the %lf is %lf\n", x, p, answer);
}
