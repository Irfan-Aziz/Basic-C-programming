#include<stdio.h>
int main(){
int a,b[2],c,d;
double p[2],q,r;
for(c=0;c<2;c++){
scanf("%d %d %lf",&a,&b[c],&p[c]);}
q=b[0]*p[0]+b[1]*p[1];
printf("VALOR A PAGAR: R$ %.2lf\n",q);}
