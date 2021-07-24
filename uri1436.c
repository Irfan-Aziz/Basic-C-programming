#include<stdio.h>
int main(){
int a,b,c,i,j,k,ar[100];
scanf("%d",&a);
for(i=0;i<a;i++){
scanf("%d",&b);
for(j=0;j<b;j++){
scanf("%d",&ar[j]);}
j=j/2;
printf("case %d: %d\n",i+1,ar[j]);}}
