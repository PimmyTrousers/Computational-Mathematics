#include <stdio.h>
#include <math.h>

double myLog(double x){
	double low = 0;
	double high = 1;
	double mid = .5;
	double pow0 = 1;
	double pow1 = 10;
	double test = 0;
	for(int i=0;i<20;i++){
		mid=(high-low)/2;
		test = sqrt(pow0*pow1);
		printf("test is %lf\n", test);
		if(test < mid){
			high = mid;
			printf("if1 high is %lf low is %lf mid is %lf\n", high, low, mid);
			pow0=pow(10,high);
			printf("pow1 is %lf and pow0 is %lf\n", pow1, pow0);
		}
		if(test > mid){
			low = mid;
			printf("if2 high is %lf low is %lf mid is %lf\n", high, low, mid);
			pow1=pow(10,low);
			printf("pow1 is %lf and pow0 is %lf\n", pow1, pow0);
		}
		if(test-mid<=.0001){
			printf("if3\n");
			return test;
		}
	}
	return test;
}

int main(void){
	double x, y;
	printf("enter the log of somthing: \n");
	scanf("%lf", &x);
	y = myLog(x);
	printf("the log is %lf\n\nlk", y);
}