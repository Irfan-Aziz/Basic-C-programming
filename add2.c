#include<stdio.h>
int func(int x,int y){
int carry=x & y;
do{
x=x^y;
y=carry <<1;}
while(y!=0);
return x;}
int main(){
printf("%d",func(3,2));}
