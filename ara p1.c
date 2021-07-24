#include<stdio.h>
main(){
int a[5],i,m;
for(i=0;i<5;i++){
printf("Enter the elements of%d",i+1);
scanf("%d",&a[i]);}
m=a[0];
for(i=1;i<5;i++){
if(a[i]>m)
m=a[i];
printf("max#%d",m);}
return 0;}
