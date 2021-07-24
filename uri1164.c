#include<stdio.h>
int main(){
int a,b,i,j,n;
scanf("%d",&n);
for(i=0;i<n;i++){
b=0;
scanf("%d",&a);
for(j=1;j<=a/2;j++){
if(a%j==0)
b=b+j;}
if(a==b){
printf("%d eh perfeito\n",a);}
else
printf("%d nao eh perfeito\n",a);}}
