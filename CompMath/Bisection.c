#include <stdio.h>
    #include <math.h>
    #define epsil 0.0001

    int p,c[10];
    
    void appro();
    void bisection(float,float,float,float);
    
    float fun(float x)
    {
    int i;
    float y=0.0;
    y=log10(x)-cos(x);
    return y;
    }

    void main()
    {
    int i;
    clrscr();
    appro();
    getch();
    }

    void bisection(float low,float high,float fx1,float fx2)
    {
    float x3,fx3,mid;
    int n=1;
    if((fx1<0&&fx2>0)||(fx1>0&&fx2<0)
    {
    printf("******************************************************************\n");
    printf("\nIt   x1        fx1        x2         fx2        x3         fx3\n");
    printf("******************************************************************\n");
             do
             {
             mid=(low+high)/2;
             fx3=fun(x3);
             if(fx3==0)
             {
            break;
             }
             if((fx1*fx3)>0)
             {
             low=x3;
             fx1=fx3;
             }
             else
             {
             high=x3;
             fx2=fx3;
             }
             printf("%d   %.4f    %.4f     %.4f    %.4f    %.4f     %.4f\n",n,x1,fx1,x2,fx2,x3,fx3);
             n=n+1;
             }while((fabs(x1-x2)>epsil)&&(fx3!=0));
    printf("\n\t\t********************\n");
    printf("\n\t\tThe root is %.4f\n",x3);
    printf("\t\t********************\n");
    }
    else
    {
    clrscr();
    
    printf("\nError in the Initial approximation\n ");
    printf("\nPlease enter right approximation\n\n");
    appro();
    }
    }
    
    void appro()
    {
    float low,high,x3,fx1,fx2,fx3;
    printf("\nPlease Enter first approximation: ");
    scanf("%f",&low);
    printf("\nPlease Enter first approximation: ");
    scanf("%f",&high);
    fx1=fun(x1);
    fx2=fun(x2);
    bisection(low,high,fx1,fx2);
    }