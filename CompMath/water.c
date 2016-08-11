#include<stdio.h>#include<stdlib.h>#include<math.h>int main(){
  double n, stupid, smart, ans,l,w,h, vol,newvol,y,x, width, thickness, howfar;  int i;  printf("How many pieces?\n");  scanf("%lf", &n);  l=100; w=100;  h=200;  x=l*w*h;  smart=0;  width = 100 ;  howfar = thickness ;  thickness=200/n;  for (i=0; i<n; i++){         y = 200 - howfar ;         width = y/2 ;         vol=width*width*thickness ;	 smart=smart+ 62*vol*howfar ;	 howfar = howfar + thickness ;
  }  l=100; w=100; h=200;  stupid=((l*w*h)/3)*62*200;  ans=stupid/smart;  printf("The ratio is: %lf\n", ans);





}