#include<stdio.h>
main(){
double x,y,x_plus_y,x_minus_y;
printf("Enter the value of x+y");
scanf("%lf",&x_plus_y);
printf("Enter the value of x-y");
scanf("%lf",&x_minus_y);
x=(x_plus_y+x_minus_y)/2;
y=(x_plus_y-x_minus_y)/2;
printf("x=%lf,y=%lf\n",x,y);
return 0;}
