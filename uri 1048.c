#include<stdio.h>
int main(){
double x,a,b,c,d,e;
scanf("%lf",&x);
if(x<=400){
a=x+(x*15)/100;
printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 15 %%\n",a,(a-x));}
else if(x<=800){
b=x+(x*12)/100;
printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 12 %%\n",b,(b-x));}
else if(x<=1200){
c=x+(x*10)/100;
printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 10 %%\n",c,(c-x));}
else if(x<=2000){
d=x+(x*7)/100;
printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 7 %%\n",d,(d-x));}
else if(x>2000){
e=x+(x*4)/100;
printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 4 %%\n",e,(e-x));}
}
