#include<stdio.h>
int main(){
int a,b=0,c=0,d=0,i,j,g;
double x,y,z;
char m[2];
scanf("%d",&a);
for(i=0;i<a;i++){
scanf("%d %s",&j,&m[i]);
if(m[i]=='C'){
b=b+j;}
else if(m[i]=='R'){
c=c+j;}
else if(m[i]=='S'){
d=d+j;}}
g=b+c+d;
 x=(b*100)/g;
 y=(c*100)/g;
 z=(d*100)/g;
 printf("Total: %d\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %0.2lf %%\npercentual de ratos: %0.2lf %%\npercentual de sapos: %0.2lf %%\n",g,b,c,d,x,y,z);}
