#include<stdio.h>
int main(){
int a,b,i,j=0,k=0;
scanf("%d",&a);
for(i=0;i<a;i++){
scanf("%d",&b);

if(b<=20&&b>=10){
j++;}
else
k++;
}
printf("%d in\n",j);
printf("%d out\n",k);}
