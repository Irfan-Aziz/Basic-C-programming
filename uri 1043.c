#include<stdio.h>
int main(){
float a,b,c,e,f;
scanf("%f %f %f",&a,&b,&c);
if(a+b>c&&b+c>a&&a+c>b){
e=a+b+c;
printf("Perimetro = %0.1f\n",e);
}
else{
f=0.5*(a+b)*c;
printf("Area = %0.1f\n",f);}}
