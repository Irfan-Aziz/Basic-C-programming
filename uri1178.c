#include<stdio.h>
int main(){
int i,j,k;
double a[100],b,c;
scanf("%lf",&b);
for(i=0;i<100;i++){
a[i]=b;
b=b/2;
}
for(i=0;i<100;i++){
printf("N[%d] = %0.4lf\n",i,a[i]);}}
