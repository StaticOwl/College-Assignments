#include<stdio.h>
#include <math.h>
#include<conio.h>
float F(float x, float y)
{
return 2*x*y;
}
main()
{
double y0,x0,y1,n,h,f,k1,k2,k3,k4;
printf("\nEnter the value of x0: ");
scanf("%lf",&x0);
printf("\nEnter the value of y0: ");
scanf("%lf",&y0);
printf("\nEnter the value of h: ");
scanf("%lf",&h);
printf("\nEnter the value of last point: ");
scanf("%lf",&n);
for(; x0<n; x0=x0+h)
{
f=F(x0,y0);
k1 = h * f;
f = F(x0+h/2,y0+k1/2);
k2 = h * f;
f = F(x0+h/2,y0+k2/2);
k3 = h * f;
f = F(x0+h/2,y0+k2/2);
k4 = h * f;
y1 = y0 + ( k1 + 2*k2 + 2*k3 + k4)/6;
printf("\n\n y(%.4lf) = %.3lf ",x0+h,y1);
y0=y1;
}
getch();
}