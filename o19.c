#include<stdio.h>
int main(){
int a[10],i,j=0,k=0;
for(i=0;i<10;i++)
scanf("%d",&a[i]);
for(i=0;i<10;i++){
if(i%2==0)
k=k+a[i];
else
j=j+a[i];}
printf("Even: %d Odd %d",k,j);}
