#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int i,j,h ;
  int p[1000], np ;
  int q[1000], nq ;
  int power ;
  int coeff[100], copy[100] ;
  int nsave ;
  int v,sum , k , checknum, z, y, flag2;
  double check[100], numsave[100], densave[100], flag, count, flag3;

 printf("Enter the leading power: ");
 scanf("%d", &power);

 for (i = power ; i >= 0 ; i--) {
   scanf("%d",&coeff[i]) ;
 }

 np = 0 ;
 v = abs(coeff[0]) ;
 for(i = 1; i <= v ; i++){
  if (fmod(v,i) == 0) {
    p[np] = i ; np++ ;
  }
 }

 nq = 0 ;
 v = abs(coeff[power]) ;
 for(i = 1; i <= v ; i++){
  if (fmod(v,i) == 0) {
    q[nq] = i ; nq++ ;
  }
 }

  for (i = 0 ; i < np ; i++) {
    printf("%d ",p[i]) ;
  }
  printf("\n") ;

  for (j = 0 ; j < nq ; j++) {
    printf("%d ",q[j]) ;
  }
  printf("\n") ;

  nsave = 0 ;
  for (i = 0 ; i < np ; i++) {
  for (j = 0 ; j < nq ; j++) {


    sum = 0 ;
    for (h = power ; h >= 0 ; h--) {
      sum = sum + coeff[h]*pow(p[i],h)*pow(q[j],power-h) ;
    }
    if (sum == 0) {
      numsave[nsave] = p[i] ;
      densave[nsave] = q[j] ;
      nsave++ ;
    }

    sum = 0 ;
    for (h = power ; h >= 0 ; h--) {
      sum = sum + coeff[h]*pow(-p[i],h)*pow(q[j],power-h) ;
    }
    if (sum == 0) {
      numsave[nsave] = -p[i] ;
      densave[nsave] =  q[j] ;
      nsave++ ;
    }
  }
  }
checknum = 0;
flag=0;
flag2 = 0;
flag3 = .1;
  for (i = 0 ; i < nsave ; i++) {
    flag2 = 0;
    for(j = 0; j < nsave ; j++) {
      for(k = 0; k < 10 ; k++){
        if(fmod(numsave[i], numsave[j])!=0 && fmod(densave[i],densave[j])!=0 && numsave[i]/densave[i]!=check[k] && (check[k]>0+flag || check[k]<0-flag)){
          for(z = 0; z < nsave; z++){
            if(check[k]==check[z] && check[z]!=0 && check[k]!=0 && (check[k]>0+flag3 || check[k]<0-flag3)){
              flag2++;
              //printf("%lf to %lf\n",check[k], check[z]);
              }
          }
          //printf("val of flag2 is %d\n", flag2);
        if(flag2<=1){
          printf("(%.lf / %.lf)\n",numsave[i],densave[i]);
          check[checknum] = numsave[i]/densave[i];
          //printf("check[%d] is %lf\n", checknum, check[checknum]);
          checknum++;
          flag =.1;
          break;
              }
            }
          }
        }
        count++;
      }
    }
