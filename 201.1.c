#include<stdio.h>
double volume(double x,double y,double z);
int main(void){
double vol;
vol=volume(12.34,4.09,4.22);
printf("%f\n",vol);
return 0;}
double volume(double x,double y,double z){
return x*y*z;
}
