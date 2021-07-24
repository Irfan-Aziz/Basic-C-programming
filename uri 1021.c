#include<stdio.h>
int main(){
int N,B,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s;
double a,cr;
scanf("%lf",&a);
N=a;
b=N/100;
c=(N%100)/50;
d=(N%100)%50;
e=d/20;
f=(d%20)/10;
g=(d%20)%10;
h=g/5;
i=(g%5)/2;
B=a*100;
j=B;
k=j/100;
l=(j%100)/50;
m=(j%100)%50;
n=m/25;
o=(m%25)/10;
p=(m%25)%10;
q=p/5;
r=(p%5)%1;
printf("NOTAS:\n");
printf("%d nota(s) de R$ 100.00\n",b);
printf("%d nota(s) de R$ 50.00\n",c);
printf("%d nota(s) de R$ 20.00\n",e);
printf("%d nota(s) de R$ 10.00\n",f);
printf("%d nota(s) de R$ 5.00\n",h);
printf("%d nota(s) de R$ 2.00\n",i);
printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1.00\n",k);
printf("%d moeda(s) de R$ 0.50\n",l);
printf("%d moeda(s) de R$ 0.25\n",n);
printf("%d moeda(s) de R$ 0.10\n",o);
printf("%d moeda(s) de R$ 0.05\n",q);
printf("%d moeda(s) de R$ 0.01\n",r);}
