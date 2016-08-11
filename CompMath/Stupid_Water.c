#include <math.h>
#include <stdio.h>
#include <stdlib.h>
/*
Density of water = 1000kb/m^3
height = 200
length = 100
width = 100
667000000 = mass of water in the pyramid
stupid_work = 133400000000
work = mass * distance (height)

*/
int main(void){

  double height, width, length, delta, slices, stupid_work, old, new, total, i ,work;
  height = 200;
  length = 100;
  width = 100;
  stupid_work = 133400000000;
  printf("enter the number of slices: \n");
  scanf("%lf", &slices);
  delta = 200/slices;
  //printf("delta is %lf\n", delta);
  old = 200;
  work = 0;
for(i = 1; i < 200 ; i = i + delta){
new = (.33333333)*pow((length/height)*(height-(i*delta)),2)*(i*delta);
//printf("pow((length/height)*(height-(i*delta)),2) is %lf\n", pow((length/height)*(height-(i*delta)),2));
//printf("(i*delta) is %lf\n", (i*delta));
printf("the value of new is %lf\n", new);
work = work + (old-new)*(i*delta);
old = new;
}
printf("The work of the pyramid with %.lf slices is %lf\n", slices, work);

}
