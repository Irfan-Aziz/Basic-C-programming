#include<stdio.h>
#include<math.h>
int main(){
double a,b,c,r1,r2,d;
scanf("%lf %lf %lf",&a,&b,&c);
r2=(-b-sqrt(b*b-4*a*c))/(2*a);
r1=(-b+sqrt(b*b-4*a*c))/(2*a);
d=(b*b-4*a*c);
if(a==0||d<0){
printf("Impossivel calcular\n");}
else
printf("R1 = %0.5lf\nR2 = %0.5lf\n",r1,r2);}
