#include<stdio.h>
int main(){
int a[30],i,j,k,max=0,min=100,s=0;
float avg,total;
printf("Enter the temperatures of the month\n");
for(i=0;i<10;i++){
scanf("%d",&a[i]);}
for(i=0;i<10;i++){
if(max<a[i])
max=a[i];}
for(i=0;i<10;i++){
if(min>a[i])
min=a[i];}
for(i=0;i<10;i++){
s=s+a[i];
total=s;
avg=total/10;

}
for(i=0;i<10;i++){
printf("%d. %d\n",i+1,a[i]);}

printf("Maximum\tMinimum\tAverage\t");
printf("\n%d\t%d\t%f\t",max,min,avg);}
