#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
  //int slices;
  double x, y, length, energy, mass_slice, distance, i, slices, G, dotMass;
  printf("Enter the number of slices: \n");
  scanf("%lf", &slices);
  length = 3/slices;
  //printf("length = %lf\n", length);
  G = 1;
  dotMass = 1;
  mass_slice = 10/slices;
  distance = 5;
  for(i = 0; i < 3; i += length){
    energy = energy + (G*dotMass*mass_slice)/(distance*distance);
    distance = distance + length;
    //printf("distance = %lf\n", distance);
  }
  printf("the energy is %lf\n\n", energy);
}
