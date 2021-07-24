#include<stdio.h>
int main(){
int a[5],i,j=0,k=0,l=0,m=0;
for(i=0;i<5;i++){
scanf("%d",&a[i]);}
for(i=0;i<5;i++){
if(a[i]%2==0){
j++;}
//printf("%d valor(es) par(es)\n",j);
else
k++;
//printf("%d valor(es) par(es)\n",j);
if(a[i]>0){
l++;}
//printf("%d valor(es) positivo(s)\n",l);
else if(a[i]<0){
m++;}}
printf("%d valor(es) par(es)\n",j);
printf("%d valor(es) impar(es)\n",k);
printf("%d valor(es) positivo(s)\n",l);
printf("%d valor(es) negativo(s)\n",m);}
