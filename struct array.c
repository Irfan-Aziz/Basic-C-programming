#include<stdio.h>
struct car{
int t;
int s;
float mil;};
int main(){
struct car c[2];
int i;
for(i=0;i<2;i++){
printf("Enter the tank capacity of car %d\n",i+1);
scanf("%d",&c[i].t);
printf("Enter the seat capacity of car %d\n",i+1);
scanf("%d",&c[i].s);
c[i].mil=c[i].t*3.2;
printf("The tank capacity of car %d is %d\n",i+1,c[i].t);
printf("The seat capacity of car %d is %d\n",i+1,c[i].s);
printf("The car mileage of car %d is %f\n",i+1,c[i].mil);}}
