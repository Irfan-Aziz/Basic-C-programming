#include<stdio.h>
int main(){
int a,b,c,d,e,j,k;
long i;

for(i=1;1<2;i++){
scanf("%d%d",&a,&b);
if(a==0&&b==0)
break;
c=a/b;
if(c>26)
printf("case %d: impossible\n",i);
else
printf("case %d: %d\n",i,c);}}
