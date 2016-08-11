#include <FPT.h>

int main(){

  double swidth, sheight, i , y, x, z;
  
  
  swidth = 600; sheight = 600;
  i = 0;
  z = .001;
  x = 25;
  G_init_graphics (swidth, sheight);

  G_rgb(0,0,0);
  G_line (300,0 ,300, 600);
  G_line (0,300 , 600, 300);
  G_rgb(1,0,0);
  while(i<600){
    y = ((i*i)+1)/((i*i)-1);
    G_point(300+x*i, x*y+300);
    i=i+z;
  }
  i = 0;
 while(i>-600){
    y = ((i*i)+1)/((i*i)-1);
    G_point(300+x*i, x*y+300);
    i=i-z;
  }
  G_wait_key();

}
