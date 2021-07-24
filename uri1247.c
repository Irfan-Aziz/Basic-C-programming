#include<stdio.h>
int main(){
int n,a,b,c,i,j,k;
float x,y;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d%d",&a,&b,&c);
j=(12-a)/b;
k=12/c;
x=j;
y=k;
if(x>=y)
printf("S\n");
else
printf("N\n");}}
