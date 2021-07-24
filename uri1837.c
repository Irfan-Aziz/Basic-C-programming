#include<stdio.h>
int main(){
int a,b,c,d,i;

scanf("%d%d",&a,&b);
if(a>=0||a<0&&b<0){
c=a/b;
d=a%b;
printf("%d %d\n",c,d);}
if(a<0&&b>0){
    c=a/b-1;
    d=a-b*c;
    printf("%d %d\n",c,d);
}}
