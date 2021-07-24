#include<stdio.h>
int main(){
int temp[30],day,i,min,max,sum;
float avg;
printf("Enter the days of the month\n");
scanf("%d\n",&day);
//printf("Enter the temperatures:\n");
for(i=0;i<day;i++){
printf("Enter the temperature for day %d\n",i+1);
scanf("%d\n",&temp[i]);}
for(i=0;i<day;i++){
printf("%d\t",temp[i]);}
sum=0;
for(i=0;i<day;i++){
sum=sum+temp[i];}
avg=sum/day;
printf("Average:%f\n",avg);
min=200;
max=0;
for(i=0;i<day;i++){
if(min>temp[i]){
min=temp[i];}
if(max<temp[i]){
max=temp[i];}}
printf("The minimum temperature: %d",min);
printf("The maximum temperature : %d",max);
return 0;}
