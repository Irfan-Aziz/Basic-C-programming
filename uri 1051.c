#include<stdio.h>
int main(){
double x,y,z,a,b,c,p;
scanf("%lf",&x);
if(x<=2000){
printf("Isento\n");}
else if(x<=3000){
a=x-2000;
y=(8*a)/100;
printf("R$ %0.2lf\n",y);}
else if(x<=4500){
b=x-3000;
z=(8*1000)/100+(b*18)/100;
printf("R$ %0.2lf\n",z);}
else if(x>4500){
c=x-4500;
p=(8*1000)/100+(18*1500)/100+(c*28)/100;
printf("R$ %0.2lf\n",p);}}
