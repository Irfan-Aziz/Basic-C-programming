#include<stdio.h>
int main(){
int a[5],k=0,i;
for(i=0;i<5;i++){
scanf("%d",&a[i]);}
for(i=0;i<5;i++){
if(a[i]%2==0){
k++;}}
printf("%d valores pares\n",k);}
