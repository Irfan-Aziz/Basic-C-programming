#include<stdio.h>
int main(){
int n,i,j,k;
float a,b,c;

scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&j,&k);
a=j;
b=k;
c=a/b;
if(k==0){
printf("divisao impossivel\n");}
else
printf("%0.1f\n",c);}}
