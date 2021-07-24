#include<stdio.h>
int main(){
int i,j,k;
float a,b,c;
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
printf("media = %0.2f",c);}
