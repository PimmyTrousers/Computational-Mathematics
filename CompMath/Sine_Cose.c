#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double const PI = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895;

double custom_sin(double x){
    double newhigh, newlow, mid, high, low, cosmid;
	x = fmod(x,360);
	if(x>=0 && x<=90){
		high = 90;
		low = 0; 
	}
	if(x>90 && x<=180){
		high = 180;
		low = 90; 
	}
	if(x>180 && x<=270){
		high = 270;
		low = 180; 
	}
	if(x>270 && x<=360){
		high = 360;
		low = 270; 
	}
	mid = (high+low)/2;
	
	for(int i=0;fabs(high-low)>.00000001;i++){
 	mid = (high+low)/2;
	//printf("|  %lf  |  %lf  |  %lf  |  %lf  |  %lf  |  %lf  |\n",newlow, cosmid, newhigh, low, mid, high);
		if(x>mid){
			low = mid;
		}
		
		if(x<mid){
			high = mid;
		}
		if(x==mid){
			break;
		}
	}

	return sin(mid*(PI/180));

}

double custom_cos(double x){
	double newhigh, newlow, mid, high, low, cosmid;
	x = fmod(x,360);
	if(x>=0 && x<=90){
		high = 90;
		low = 0; 
	}
	if(x>90 && x<=180){
		high = 180;
		low = 90; 
	}
	if(x>180 && x<=270){
		high = 270;
		low = 180; 
	}
	if(x>270 && x<=360){
		high = 360;
		low = 270; 
	}
	mid = (high+low)/2;
	
	for(int i=0;fabs(high-low)>.00000001;i++){
 	mid = (high+low)/2;

	//printf("|  %lf  |  %lf  |  %lf  |  %lf  |  %lf  |  %lf  |\n",newlow, cosmid, newhigh, low, mid, high);
		if(x>mid){
			low = mid;
		}
		
		if(x<mid){
			high = mid;
		}
		if(x==mid){
			break;
		}
	}

	return cos(mid*(PI/180));

}

int main(void){
	double i;
	double y, z, p;
	printf("enter a number: \n");
	scanf("%lf", &i);
	y = sin(i*(PI/180));
	z = cos(i*(PI/180));
	printf("Real Sin:%lf Real Cos:%lf\n  My Sin:%lf   My Cos:%lf\n\n", y, z, custom_sin(i), custom_cos(i));
	
}