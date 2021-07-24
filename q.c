#include<stdio.h>
double add(double num1,double num2){
double sum=num1+num2;
return sum;}
main(){
double a,b,c;
a=2.3;
b=2.2;
c=add(a,b);
printf("%lf",c);
return 0;
}
