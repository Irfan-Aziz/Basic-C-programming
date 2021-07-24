#include<stdio.h>
int main(){
int a,b,c,d;
scanf("%d",&a);
b=a/365;
c=(a%365)/30;
d=(a%365)%30;
printf("%d ano(s)\n%d mes(es)\n%d dia(s)",b,c,d);}
