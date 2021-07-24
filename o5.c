#include<stdio.h>
int main(){
int a[10],i,j,b[10],k=0;
for(i=0;i<10;i++){
scanf("%d",&a[i]);}
for(i=0;i<10;i++){
for(j=i+1;j<10;j++){
if(a[i]==a[j])
k++;}}
if(k!=0)
printf("Matched\n");
else
printf("Not matched\n");}
