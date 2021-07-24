#include<stdio.h>
int main(){
int n,a,b[10],c,d,e,f,g,h,i,j,k;
float x,y,z;
scanf("%d",&n);
for(i=0;i<n;i++){
c=0;k=0;
scanf("%d",&a);
for(j=0;j<a;j++){
scanf("%d",&b[j]);}
for(j=0;j<a;j++){
c+=b[j];
d=c/a;}
for(j=0;j<a;j++){
if(b[j]>d)
k++;}
x=a;y=k;
z=(y*100)/x;
printf("%0.3f\n","%",z);}}
