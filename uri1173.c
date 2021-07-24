#include<stdio.h>
int main(){
int a[20],i,j;
scanf("%d",&j);
for(i=0;i<10;i++){
a[i]=j;
j=j*2;}
for(i=0;i<10;i++){
printf("N[%d] = %d\n",i,a[i]);}}
