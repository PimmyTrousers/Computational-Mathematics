#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int factorial(int x){
	int y = 1;
	for(int i=1;i<=x;i++){
		y = y * i;
	}
	return y;
}

/*double custom_sin(double x, double accuracy){
	double sine = x;
	int neg = 1;
	double const PI = 3.14159;

	for(int i=3;i<=accuracy;i=i+2){
		sine = sine + (pow(-1,i)/factorial(2*i)) * pow((x-PI/2),(2*i));
	}
	return sine;
} */

double custom_sin(double x)
{
    int n;
    double val=0;
    for (n=0;n<8;n++)
    {
        double p = pow(-1,n);
        double px = pow(x,2*n+1);
        long fac = factorial(2*n+1);
        val = val+p*px/fac;
    }
    return val;
}

int main(){
	double i;
	double y, z;
	printf("enter a number: \n");
	scanf("%lf", &i);
	y = custom_sin(i);
	z = factorial(3);
printf("the factorial of 3 is %lf\n", z);
	printf("Sin of %lf is %lf\n", i , y);

}