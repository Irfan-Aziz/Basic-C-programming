#include<stdio.h>
int main(){
int a,b,c,d,i,e=0;
scanf("%d",&a);
for(i=0;i<a;i++){
scanf("%d %d",&b,&c);
if(b<c){
for(d=b;d<c;d++){
if(d==b){
continue;}
else if(d%2==1){
e=e+d;}}
}
else if(b>c){
for(d=c;d<b;d++){
if(d==c){
continue;}
else if(d%2==1){
e=e+d;}}
}
printf("%d\n",e);
e=0;}}
