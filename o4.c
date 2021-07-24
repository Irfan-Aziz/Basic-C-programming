#include<stdio.h>
int main(){
float a[20],j;
int i,k;
for(i=0;i<10;i++){
scanf("%f",&a[i]);}
for(i=0;i<10;i++){
for(k=9;k>=i;k--)   {
if(a[k]>a[k+1]){
j=a[k+1];
a[k+1]=a[k];
a[k]=j;}}}
for(i=0;i<10;i++){
printf("%f\n",a[i]);}}
