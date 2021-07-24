#include<stdio.h>
float avg(void);
int main(void){
float b;
b=avg();
printf("%f",b);}
float avg(void){
float a,r,s,sum=0;
int i;
for(i=0;i<10;i++){
scanf("%f",&r);
sum=sum+r;}
s=i;
a=sum/s;
return a;
}
