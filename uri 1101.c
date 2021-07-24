#include<stdio.h>
int main(){
int a,b,i,e,d=0;
for(i=0;1<2;i++){

scanf("%d %d",&a,&b);
if(a==0||a<0||b==0||b<0){
break;}
if(a<b){
for(e=a;e<=b;e++){

printf("%d ",e);
d=d+e;}
printf("sum=%d\n",d);}
if(a>b){
for(e=b;e<=a;e++){

//printf("%d sum=%d",e,d);
printf("%d",e);
d=d+e;}
printf("sum=%d\n",d);}
d=0;}}
