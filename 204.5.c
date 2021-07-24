#include<stdio.h>
int *init(int x);
int count;
int main(void){
int *p;
p=init(110);
printf("Count (through p) is %d\n",*p);
return 0;}
int *init(int x){
count=x;
return &count;}
