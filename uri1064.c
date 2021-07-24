#include<stdio.h>
int main(){
int k=0;
float a,b,c,d,e,f,sum=0,g;
scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
if(a||b||c||d||e||f>0){
if(a>0){
k++;
sum=sum+a;}
if(b>0){
k++;
sum=sum+b;}
if(c>0){
k++;
sum=sum+c;}
if(d>0){
k++;
sum=sum+d;}
if(e>0){
k++;
sum=sum+e;}
if(f>0){
k++;
sum=sum+f;}
}
printf("%d valores positivos\n",k);
g=k;
sum=sum/g;
printf("%0.1f\n",sum);}
