#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//volume is 47.125 ft^3
int main(){
  double torque, volume, radius, r, distance, slices, n, i, sign, torqueslice, h, x, fulcrum, high, low;
  //printf("Enter the position of the fulcrum: ");
  //scanf("%lf", &fulcrum);
  n = 1000000;
  slices = 10.0/n;
  high = 9;
  low = 2.5;
while(high-low>.000000001){

  fulcrum = (high+low)/2;
  torque = 0;
  for(i = 0; i < n; i++){
    x = i * slices;
    radius = .3 * x;
    volume = (M_PI*radius*radius/2)*slices;
    torqueslice = volume*(x-fulcrum);
    torque = torque + torqueslice;
  }
    if(torque<0){
      high = fulcrum;
    }
    if(torque>0){
      low = fulcrum;
    }
}
  printf("The fulcrum is at %lf for the cone to be balanced\n", fulcrum);
}
