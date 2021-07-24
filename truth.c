#include<stdio.h>
int main(){
int p,q,i;
printf("Truth table for q->p\n");
printf("p\tq\tp&q\n");
for(p=0;p<=1;p++){
for(q=0;q<=1;q++){
printf("%d\t%d\t%d\n",p,q,!(~q|~p));}}}
