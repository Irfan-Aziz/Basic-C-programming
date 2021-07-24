#include<stdio.h>
int main(){
int x,y,a,n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++){
a=0;
scanf("%d%d",&x,&y);
if(x%2==0)
x++;
for(j=0;j<y;j++){
a=a+x;
x=x+2;}
printf("%d\n",a);}}
