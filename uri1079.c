#include<stdio.h>
int main(){
int n,i,j;
float a,b,c,d;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%f%f%f",&a,&b,&c);
d=(a*2+b*3+c*5)/10;
printf("%0.1f\n",d);}}
