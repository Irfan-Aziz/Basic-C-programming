#include<stdio.h>
int main(){
int a[20],b[20],i,j,c[20];
printf("Enter the numbers for a\n");
for(i=0;i<5;i++){
scanf("%d",&a[i]);}
printf("Enter the numbers for b\n");
for(i=0;i<5;i++){
scanf("%d",&b[i]);}
for(i=0;i<5;i++){
c[i]=a[i];}
for(i=0;i<5;i++){
a[i]=b[i];
}
for(i=0;i<5;i++){
b[i]=c[i];
}
for(i=0;i<5;i++){
printf("a[%d]: %d\n",i+1,a[i]);}
for(i=0;i<5;i++){
printf("b[%d]: %d\n",i+1,b[i]);}
return 0;}
