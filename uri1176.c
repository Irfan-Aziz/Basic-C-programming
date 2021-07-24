#include<stdio.h>
int main(){
long long int i,a,b,c,n,t,j;
scanf("%lld",&t);
for(j=0;j<t;j++){
        a=0;
b=1;
        scanf("%lld",&n);
for(i=0;i<=60;i++){

if(i==n)

break;

c=a+b;
a=b;
b=c;}
printf("Fib(%lld) = %lld\n",n,a);}}
