#include<stdio.h>
int main(){
int i,j=0;
float a,b,c,sum=0;
for(;;){
scanf("%f",&a);
if(a<0)
break;
sum=sum+a;
j++;}
b=j;
printf("%0.2f\n",sum/b);}
