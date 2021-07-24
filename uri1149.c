#include<stdio.h>
int main(){
int a,n,b,sum=0;
scanf("%d%d",&a,&n);
for(;;){
if(n==0||n<0){
scanf("%d",&n);}
else
break;}
for(b=0;b<n;b++){
sum=sum+a;
a++;}
printf("%d\n",sum);}
