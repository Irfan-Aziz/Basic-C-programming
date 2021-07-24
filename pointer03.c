#include<stdio.h>
int main(){
int i,*p;
for(i=0;i<10;i++){
p=&i;
printf("%d\n",*p);}}
