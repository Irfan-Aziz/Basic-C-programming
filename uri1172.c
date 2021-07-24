#include<stdio.h>
int main(){
int a[20],i,j;
for(i=0;i<10;i++){
scanf("%d",&a[i]);}
for(i=0;i<10;i++){
if(a[i]==0||a[i]<0)
a[i]=1;
printf("x[%d] = %d\n",i,a[i]);}}
