#include<stdio.h>
int main(){
double a,c,b,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r;

scanf("%lf",&a);
d=a/100.00;
b=(a%100.00)/50.00;
c=(a%100.00)%50.00;
e=c/20.00;
f=(c%20.00)/10.00;
g=(c%20.00)%10.00;
h=g/5.00;
i=(g%5.00)/2.00;
j=(g%5.00)%2.00;
k=j/1.00;
l=(j%1.00)/0.50;
m=(j%1.00)%0.50;
n=l/0.25;
o=(l%0.25)/0.10;
p=(l%0.25)%0.10;
q=p/0.05;
r=(p%0.05)/0.1;
printf("NOTAS:\n",);
printf("%lf nota(s) de R$ 100.00\n",d);
printf("%lf nota(s) de R$ 50.00\n",b);
printf("%lf nota(s) de R$ 20.00\n",e);
printf("%lf nota(s) de R$ 10.00\n",f);
printf("%lf nota(s) de R$ 5.00\n",h);
printf("%lf nota(s) de R$ 2.00\n",i);
printf("MOEDAS:\n");

printf("%lf moeda(s) de R$ 1.00\n",k);
printf("%lf moeda(s) de R$ 0.50\n",l);
printf("%lf moeda(s) de R$ 0.25\n",n);
printf("%lf moeda(s) de R$ 0.10\n",o);
printf("%lf moeda(s) de R$ 0.05\n",q);
printf("%lf moeda(s) de R$ 0.01\n",r);}
