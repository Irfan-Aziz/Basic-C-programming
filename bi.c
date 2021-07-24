#include<stdio.h>
int main (){
int a,b,c,d,e;
printf("input the integers a,b,c&d:\n",a,b,c,&d);
scanf("%d%d%d%d",&a,&b,&c,&d);
e=(a+b+c+d)/4;
printf("Average:%d",e);
}
