#include<stdio.h>
int main(){
int i,l,n,t,b[100];
float avg,k=0,a[100],j,m;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%f",&a[i]);}
for(t=0;t<2;t++){
m=100;
for(i=0;i<n;i++){
if(m>a[i]&&a[i]!=0)
m=a[i];}
for(i=0;i<n;i++){
if(a[i]==m)
a[i]=0;}}
for(i=0;i<n;i++){
k=k+a[i];}
j=k/(n-2);
avg=j;
printf("%0.3f\n",avg);
}
