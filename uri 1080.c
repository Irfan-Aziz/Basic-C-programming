#include<stdio.h>
int main(){
int a[100],i,j,k=0;
for(i=0;i<100;i++){
scanf("%d",&a[i]);}
for(i=0;i<100;i++){
if(k<a[i]){
k=a[i];
j=i+1;}}
printf("%d\n%d\n",k,j);}
