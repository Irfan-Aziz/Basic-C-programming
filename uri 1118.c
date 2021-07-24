#include<stdio.h>
int main(){
int i,j,k;
float a,b,c;
for(;;){
for(;;){
scanf("%f",&a);

if(a<0||a>10){
printf("nota invalida\n");
continue;}
else
    break;
}for(;;){
scanf("%f",&b);
if(b<0||b>10){
printf("nota invalida\n");
continue;}
else
    break;
}
c=(a+b)/2;
printf("media = %0.2f\n",c);
//scanf("%d",&j);
printf("novo calculo(1-sim 2-nao)\n");
scanf("%d",&k);
if(k=1)
continue;
else if(k=2)
break;
}}
