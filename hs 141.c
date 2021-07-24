#include<stdio.h>
main(){
int t[31],days,i,max,min;
int avg;
printf("Enter the days of the month\n");
scanf("%d",&days);
for(i=0;i<days;i++){
printf("Enter temperatures for day %d",i+1);
scanf("%d",&t[i]);
printf("%d\t%d\n",i+1,t[i]);}
avg=0;
for(i=0;i<days;i++){
avg=avg+t[i];}
printf("average=%d",avg/days);

min=100;
max=0;
for(i=0;i<days;i++){
if(min>t[i])
min=t[i];
if(max<t[i])
max=t[i];}
printf("minimum %d",min);
printf("maximum %d",max);}
