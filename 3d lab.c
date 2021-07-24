#include<stdio.h>
#define ESP 0.0001
#define f(x) pow(x,3)-2*x-5
main(){
float x0,x1,x2,f0,f1,f2;
int count=0;
do{
printf("Enter the value of x0:\n");
scanf("%f",&x0);
}while(f(x0)>0);
do{
printf("Enter the value of x1:\n");
scanf("%f",&x1);}
while(f(x1)<0);
do{
f0=f(x0);
f1=f(f1);
x2=x0-((f0*(x1-x0))/(f1-f0));
f2=f(x2);
if(f0*f2<0){
x1=x2;
}
else{
x0=x2;}
}
while(fabs(f2)>ESP);
printf("%f",x2);}
