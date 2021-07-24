#include<stdio.h>
int main(){
int i,x[5];
for(i=0;i<5;i++){
printf("Enter the value of x");
scanf("%d",&x[i]);}
for(i=0;i<5;i++){
printf("\nx[%d]=%d",i,x[i]);}
return 0;}
