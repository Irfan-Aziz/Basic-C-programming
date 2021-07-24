#include<stdio.h>
float getnum(void){
float x;
printf("Enter a number\n");
scanf("%f",&x);
return x;}
int main(void){
float i;
i=getnum();
printf("%f",i);
return 0;}
