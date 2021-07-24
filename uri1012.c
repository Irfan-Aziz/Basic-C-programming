#include<stdio.h>
int main(){
double a,b,c,t,ci,s,r,tr;
scanf("%lf %lf %lf",&a,&b,&c);
t=0.5*a*c;
ci=3.14159*c*c;
tr=0.5*(a+b)*c;
s=b*b;
r=a*b;
printf("TRIANGULO: %0.3lf\nCIRCULO: %0.3lf\nTRAPEZIO: %0.3lf\nQUADRADO: %0.3lf\nRECTANGULO: %0.3lf\n",t,ci,tr,s,r);}
