#include<stdio.h>
int main(){
int x,y,j,k;
double p,q,r;
scanf("%d",&j);
for(k=0;k<3;k++){
scanf("%d %d",&x,&y);
if(y==0){
printf("divisao impossivel\n");
continue;}
p=x;
q=y;
r=p/q;
printf("%0.1lf\n",r);


}}
