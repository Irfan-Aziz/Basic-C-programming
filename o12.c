#include<stdio.h>
int main(){
int a[20],i,j,k,max=0,s;
printf("Enter 20 numbers\n");
for(i=0;i<20;i++){
scanf("%d",&a[i]);}
for(i=0;i<20;i++){
k=0;
for(j=0;j<20;j++){
if(i==j)
continue;
if(a[i]==a[j])
k++;}
if(k>max){
max=k;
s=a[i];}}
printf("mode: %d",s);}
