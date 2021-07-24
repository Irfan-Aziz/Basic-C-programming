#include<stdio.h>
int main(){
int i,j,m,n,sum,x[30];
sum=x[0];
float ave;
for(i=0;i<30;i++){
printf("Enter the value for x\n");
scanf("%d",&x[i]);}
for(i=0;i<30;i++){
printf("\ntemperature x[%d]=%d\t",i,x[i]);}

for(i=0;i<30;i++){
m=x[0];
if(x[i]>m){
m=x[i];}
printf("Max=%d",x[i]);}
for(i=0;i<30;i++){
n=x[0];
if(x[i]<n){
n=x[i];}
else
n=x[0];}
printf("Min=%d",n);
for(i=0;i<30;i++)
{
    sum=sum+x[i];

ave=sum/30;

printf("%f",ave);}}

