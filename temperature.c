#include<stdio.h>
int main(){
int i,j,max,min,a[20],day;
double avg=0.00;
printf("Enter the numbers of day:\n");
scanf("%d",&day);
printf("Enter temperatures:\n");
for(i=0;i<day;i++){
printf("%d\n",i+1);
scanf("%d",&a[i]);}
for(i=0;i<day;i++){
printf("%d\t%d",i+1,a[i]);}
min=100;
for(i=0;i<day;i++){
if(min>a[i]){
min=a[i];}}
max=0;
for(i=0;i<day;i++){
if(max<a[i]){
max=a[i];}}
printf("Minimum: %d\n",min);
printf("Maximum: %d\n",max);
for(i=0;i<day;i++){
avg=avg+a[i];}
printf("Average: %lf",avg/day);
return 0;
}
