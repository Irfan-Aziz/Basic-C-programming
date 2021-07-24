#include<stdio.h>
int main(){
int a[1000],i,j=0,n;
scanf("%d",&n);
for(i=0;i<1000;i++){
a[i]=j;
if(j==n-1){
printf("N[%d] = %d\n",i,a[i]);
j=0;}
else{
printf("N[%d] = %d\n",i,a[i]);



j++;}
}}
