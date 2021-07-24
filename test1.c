#include<stdio.h>
int main(){
int a,c,b,d,e,f,g,h,i,j,k;
scanf("%d",&a);
d=a/100;
b=(a%100)/50;
c=(a%100)%50;
e=c/20;
f=(c%20)/10;
g=(c%20)%10;
h=g/5;
i=(g%5)/2;
j=(g%5)%2;
k=j/1;
printf("%d\n",a);
printf("%d nota(s) de R$ 100,00\n",d);
printf("%d nota(s) de R$ 50,00\n",b);
printf("%d nota(s) de R$ 20,00\n",e);
printf("%d nota(s) de R$ 10,00\n",f);
printf("%d nota(s) de R$ 5,00\n",h);
printf("%d nota(s) de R$ 2,00\n",i);
printf("%d nota(s) de R$ 1,00\n",k);}
