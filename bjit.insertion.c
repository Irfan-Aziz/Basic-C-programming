#include<stdio.h>
int main(){
int a[100],i,j,k,temp;
for(i=0;i<10;i++){
scanf("%d",&a[i]);}
for(i=1;i<10;i++){
for(j=0;j<=i-1;j++){
if(a[i]<a[j]){
temp=a[j];
a[j]=a[i];
a[i]=temp;}}}
for(i=0;i<10;i++){
printf("%d\n",a[i]);}}
